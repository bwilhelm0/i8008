`include "internal_defines.vh"
`include "8008_isa.vh"

`default_nettype none

module top (
    input logic clk100, // 100MHz clock
    input logic reset_n, // Active-low reset

    input logic uart_rx,
    output logic uart_tx,

    output logic [7:0] base_led, // LEDs on the far right side of the board
    output logic [23:0] led, // LEDs in the middle of the board

    input logic [23:0] sw, // The tiny slide-switches

    output logic [3:0] display_sel, // Select between the 4 segments
    output logic [7:0] display // Seven-segment display
);

  logic clk, rst;
  logic [11:0] chip_inputs, chip_outputs;
  logic [7:0] D_in, D_out;
  logic INTR, READY, Sync;
  state_t state;

  // debug_harness dbg (
  //     .uart_rx, .uart_tx,

  //     .chip_inputs,
  //     .chip_outputs,

  //     .chip_clock(clk),
  //     .chip_reset(rst),
      
  //     .clk100
  // );


  assign D_in = sw[7:0];
  assign INTR = sw[8]; 
  assign READY = sw[9];
  assign clk = clk100;
  assign rst = ~reset_n;
  assign D_out = chip_outputs[7:0];
  assign Sync = chip_outputs[8];
  assign state = chip_outputs[11:9];
  assign chip_inputs[9:0] = sw[9:0];

  i8008_core #(.WIDTH(8), .STACK_HEIGHT(8)) DUT 
  (.D_in, .INTR, .READY, .clk, .rst, .D_out, .Sync, .state);

  // Mirror the chip inputs and outputs to the LEDs for debugging convenience
  assign led = {clk, rst, chip_inputs, chip_outputs};
    
endmodule: top

module i8008_core
  #(parameter WIDTH = 8,
              STACK_HEIGHT = 8)
  (input logic [WIDTH-1:0] D_in,
   input logic INTR, READY, clk, rst,
   output logic [WIDTH-1:0] D_out,
   output logic Sync,
   output state_t state);

  logic [7:0] bus;
  logic [7:0] instr;
  logic enable_SP, Ready, Intr, DBR_D, DBR_en;
  logic [7:0] A_in, A_out, B_in, B_out, ALU_out;
  ctrl_signals_t ctrl_signals;
  flags_t flags;
  logic [2:0] sel_Stack;

  // How does program terminate? Call END?
  // Is END an instruction? I think this is just Halt in disguise. Followed by RST?
  // How does proc reset? Will need to reset PC and Stack_sel

  // // State logic
  cycle_t cycle;

  // Stabilize async inputs?? Maybe only need flip flop. Maybe don't need anything since Sync signal exists
  Stabilizer R (.d(READY), .clk, .Q(Ready));
  Stabilizer I (.d(INTR), .clk, .Q(Intr));

  // Shouldn't be a register, just a bus buffer
  // But since there's 8 ins and outs, use buffer for out
  // Connect DBR enable to Ready?? Done, now external mem can write to reg
  // I think add an in, and out buffer for ease of use
  BusDriver #(.WIDTH(WIDTH)) DBRdriver (.en(ctrl_signals.DBR.re), .data(B_out), .buff(B_in), .bus);

  assign DBR_D = Ready ? D_in : bus;
  assign DBR_en = Ready | ctrl_signals.DBR.we;

  Register #(.WIDTH(WIDTH)) DBR (.d(DBR_D), .Q(D_out), .clk, .en(DBR_en), .clear(ctrl_signals.DBR.clr));  // Enable is tied to ready or a ctrl signal
  Register #(.WIDTH(WIDTH)) IR (.d(bus), .Q(instr), .clk, .en(ctrl_signals.IR.we), .clear(ctrl_signals.IR.clr));

  BusDriver #(.WIDTH(WIDTH)) Adriver (.en(ctrl_signals.A.re), .data(A_out), .buff(A_in), .bus);
  BusDriver #(.WIDTH(WIDTH)) Bdriver (.en(ctrl_signals.B.re), .data(B_out), .buff(B_in), .bus);
  Register #(.WIDTH(WIDTH)) regA (.d(A_in), .Q(A_out), .clk, .en(ctrl_signals.A.we), .clear(ctrl_signals.A.clr));
  Register #(.WIDTH(WIDTH)) regB (.d(B_in), .Q(B_out), .clk, .en(ctrl_signals.B.we), .clear(ctrl_signals.B.clr));

  BusDriver #(.WIDTH(WIDTH)) ALUdriver (.en(ctrl_signals.ALU.re), .data(ALU_out), .buff(), .bus);
  ALU Unit (.clk, .a(A_out), .b(B_out), .ALU_ctrl(ctrl_signals.ALU), .d(ALU_out), .flags);

  reg_file #(.WIDTH(WIDTH), .HEIGHT(7)) rf (.clk, .bus, .rf_ctrl(ctrl_signals.rf_ctrl));

  assign enable_SP = ctrl_signals.SP_ctrl.en_SP & ~((sel_Stack == 'd0) & ~ctrl_signals.SP_ctrl.inc_SP);
  Counter #(.WIDTH($clog2(STACK_HEIGHT))) SP_SEL
    (.load('d0), .clk, .d('d0), .Q(sel_Stack),
    .en(enable_SP), 
    .clear(ctrl_signals.SP_ctrl.clr_SP), 
    .up(ctrl_signals.SP_ctrl.inc_SP));

  stack #(.WIDTH(14), .HEIGHT(STACK_HEIGHT)) Stack 
    (.clk, .bus, .sel(sel_Stack), 
     .Stack_ctrl(ctrl_signals.Stack_ctrl));

  fsm_decoder Brain (.clk, .Ready, .Intr, .rst, .instr, .flags, .ctrl_signals, .state);

endmodule: i8008_core

module ALU
   #(parameter WIDTH = 8)
    (input logic [7:0] a, b,
     input ALU_ctrl_t ALU_ctrl,
     input clk,
     output logic [7:0] d,
     output flags_t flags);

  logic [7:0] add_tmp;
  logic [7:0] art_tmp;
  flags_t flag_in;

  logic [7:0] NA;

  Register #(.WIDTH(4)) 
    flag_reg (.d(flag_in), .Q(flags), .clk, .en(ALU_ctrl.en_Flag), .clear(ALU_ctrl.clr_Flag));

  always_comb begin
    flag_in.CARRY = 1'b0;
    NA = 'd0;
    if (ALU_ctrl.ARITH) begin
      unique case (ALU_ctrl.arith_op)
        ADD1_op: {flag_in.CARRY, d} = a + 1;
        SUB1_op: {flag_in.CARRY, d} = a - 1;
        RLC_op: begin
          d = {a[6:0], a[7]};
          flag_in.CARRY = a[7];
        end
        RRC_op: begin
          d = {a[0], a[7:1]};
          flag_in.CARRY = a[0];
        end
        RAL_op: begin
          d = {a[6:0], flags.CARRY};
          flag_in.CARRY = a[7];
        end
        RAR_op: begin
          d = {flags.CARRY, a[7:1]};
          flag_in.CARRY = a[0];
        end
      endcase
    end
    else begin
      d = 'd0;
      unique case (ALU_ctrl.alu_op)
        ADD_op: {flag_in.CARRY, d} = a + b;
        ADDC_op: {flag_in.CARRY, d} = a + b + (flags & CARRY_bit);
        SUB_op: {flag_in.CARRY, d} = a - b;
        SUBC_op: {flag_in.CARRY, d} = a - b - (flags & CARRY_bit);
        AND_op: d = a & b;
        OR_op: d = a | b;
        XOR_op: d = a ^ b;
        CMP_op: {flag_in.CARRY, NA} = a - b;
        default: d = 'd0;
      endcase
    end
  end

  assign flag_in.SIGN = d[7] | NA[7];
  assign flag_in.PARITY = (^d) | (^NA);
  assign flag_in.ZERO = (ALU_ctrl.alu_op == CMP_op) ? (~(|NA)) : (~(|d));
endmodule: ALU

module fsm_decoder
  (input logic clk, Ready, Intr, rst,
   input logic [7:0] instr,
   input flags_t flags,
   output ctrl_signals_t ctrl_signals,
   output state_t state);

  logic [2:0] SSS, DDD; 
  logic [2:0] D5_3;

  assign SSS = instr[2:0];
  assign DDD = instr[5:3];
  assign D5_3 = instr[5:3];
  cycle_t cycle, next_cycle;
  state_t next_state;

  logic CF;

  // Should flags be one hot, or fully encoded?
  always_comb begin
    CF = 1'b1;
    unique case (instr[4:3])
      Ca: CF = ~flags.CARRY;
      Ze: CF = ~flags.ZERO;
      Si: CF = ~flags.SIGN;
      Pa: CF = flags.PARITY; // Parity of result is even
    endcase
  end

  // Make sure all internal states are represented. Should be
  // How does T1I work? Why no PC increment?
  // Fix Conditional instruction logic. I think it's fixed

  always_comb begin
    next_cycle = cycle;
    ctrl_signals = 'd0; // Should these be initialized to X's? No, apparently doesn't minimize logic
    unique case (cycle)
      CYCLE1: begin
        unique case (state)
          T1, T1I: begin // INCR PC??
            next_state = T2;

            ctrl_signals.DBR.we = 1'b1;
            ctrl_signals.Stack_ctrl.re_Stack = 1'b1;
            ctrl_signals.Stack_ctrl.lower = PC_L;
          end
          T2: begin 
            next_state = T3;

            ctrl_signals.DBR.we = 1'b1;
            ctrl_signals.Stack_ctrl.re_Stack = 1'b1;
            ctrl_signals.Stack_ctrl.lower = PC_H;

            ctrl_signals.Stack_ctrl.cycle_ctrl = PCI;
            ctrl_signals.Stack_ctrl.inc_PC = 1'b1;   // Increment PC here and not T1 so it doesn't affect PC_H
          end
          T3, WAIT, STOPPED: begin
            if (instr == RST) begin
              ctrl_signals.B.we = 1'b1;
              ctrl_signals.A.clr = 1'b1;
              ctrl_signals.SP_ctrl.inc_SP = 1'b1;
              ctrl_signals.SP_ctrl.en_SP = 1'b1;
              ctrl_signals.DBR.re = 1'b1;
            end
            else begin
              ctrl_signals.IR.we = 1'b1;
              ctrl_signals.B.we = 1'b1;
              ctrl_signals.DBR.re = 1'b1;
            end

            unique case (instr) 
              HLT0, HLT1: begin 
                if (Intr) begin
                  next_state = T1I; // Go to "T1I" next
                  next_cycle = CYCLE1;
                end
                else begin
                  next_state = STOPPED; // STOPPED STATE
                end
              end
              RFc, RTc: begin  // Conditional return only?
                if (((instr == RTc) & ~CF) | ((instr == RFc) & CF)) begin
                  next_state = Ready ? T4 : WAIT; // WAIT state
                end
                else begin
                  next_cycle = CYCLE1;
                  next_state = T1;
                end 
              end
              LrM, ALUM, ALUI, INP, OUT, LrI, JMP, JFc, JTc, CAL, CTc, CFc: begin
                next_cycle = CYCLE2;
                next_state = T1;
              end
              default: begin
                next_state = Ready ? T4 : WAIT; // WAIT state
              end
            endcase
          end
          T4: begin
            unique case (instr)
              Lr1r2, LMr, ALU_op: begin
                // Deal with LrM case? No, it shouldn't get here
                // Deal with other ALU cases? Nope, shouldn't get here
                if (SSS == 3'b111) begin
                end
                else begin
                  ctrl_signals.B.we = 1'b1;
                  ctrl_signals.rf_ctrl.re = 1'b1;
                  ctrl_signals.rf_ctrl.sel = SSS;
                  ctrl_signals.DBR.we = 1'b1;
                end
              end
              INr, DCr: begin 
                // Deal with HALT case and mem case for INr/DCr? No, shouldn't get here
                ctrl_signals.rf_ctrl.re = 1'b1;
                ctrl_signals.rf_ctrl.sel = DDD;
                ctrl_signals.A.we = 1'b1;
              end
              RLC, RRC, RAL, RAR: begin
                // read Accum into A alu reg
                ctrl_signals.rf_ctrl.re = 1'b1;
                ctrl_signals.rf_ctrl.sel = Acc;
                ctrl_signals.A.we = 1'b1;
              end
              RET: begin // Pop stack
                ctrl_signals.SP_ctrl.inc_SP = 1'b0;
                ctrl_signals.SP_ctrl.en_SP = 1'b1;
              end
              RFc, RTc: begin // Pop stack conditionally
                ctrl_signals.SP_ctrl.inc_SP = 1'b0;
                ctrl_signals.SP_ctrl.en_SP = ((instr == RFc) & CF) | ((instr == RTc) & ~CF);
              end
              RST: begin
                ctrl_signals.A.re = 1'b1;
                ctrl_signals.Stack_ctrl.lower = 1'b0;
                ctrl_signals.Stack_ctrl.we_Stack = 1'b1;
              end
              // default: begin
              //   // Do nothing!
              // end
            endcase

            if (instr == LMr) begin
              next_state = T1;
              next_cycle = CYCLE2;
            end
            else begin
              next_state = T5;
            end
          end
          T5: begin
            unique case (instr)
              RST: begin
                ctrl_signals.B.re = 1'b1;
                ctrl_signals.Stack_ctrl.we_Stack = 1'b1;
                ctrl_signals.Stack_ctrl.lower = 1'b1; // What to do here since only want D5-3?
                ctrl_signals.Stack_ctrl.D5_3 = 1'b1;
              end
              INr, DCr: begin
                ctrl_signals.rf_ctrl.we = 1'b1;
                ctrl_signals.rf_ctrl.sel = DDD;
                ctrl_signals.ALU.arith_op = (instr == INr) ? ADD1_op : SUB1_op;
                ctrl_signals.ALU.ARITH = 1'b1;
                ctrl_signals.ALU.re = 1'b1;
                ctrl_signals.ALU.en_Flag = 1'b1;
              end
              ALU_op: begin
                ctrl_signals.rf_ctrl.we = 1'b1;
                ctrl_signals.rf_ctrl.sel = Acc;
                ctrl_signals.ALU.alu_op = D5_3; // Enter ops for ALU commands
                ctrl_signals.ALU.ARITH = 1'b0;
                ctrl_signals.ALU.re = 1'b1;
                ctrl_signals.flags.we = 1'b1;
              end
              RLC, RRC, RAL, RAR: begin
                ctrl_signals.rf_ctrl.we = 1'b1;
                ctrl_signals.rf_ctrl.sel = A;
                ctrl_signals.ALU.alu_op = D5_3; // Enter ops for rotate commands
                ctrl_signals.ALU.ARITH = 1'b1;
                ctrl_signals.ALU.re = 1'b1;
                ctrl_signals.flags.we = 1'b1;
              end
              //RET, RFc, RTc: // do nothing!
              //default: // do nothing!
            endcase

            next_state = T1;
            next_cycle = CYCLE1;
          end
          default: begin
            next_state = T1;
            next_cycle = CYCLE1;
          end
        endcase
      end
      CYCLE2: begin
        unique case (state)
          T1, T1I: begin 
            next_state = T2;

            unique case (instr)
              LMI, LrI, ALUI, JMP, JFc, JTc, CAL, CTc, CFc: begin
                ctrl_signals.Stack_ctrl.re_Stack = 1'b1;
                ctrl_signals.Stack_ctrl.lower = 1'b1;
                ctrl_signals.DBR.we = 1'b1;
                ctrl_signals.Stack_ctrl.cycle_ctrl = PCR;
              end
              LrM, LMr, ALUM: begin
                ctrl_signals.rf_ctrl.re = 1'b1;
                ctrl_signals.rf_ctrl.sel = Lo;
                ctrl_signals.Stack_ctrl.cycle_ctrl = (instr == LMr) ? PCW : PCR;
                ctrl_signals.DBR.we = 1'b1;
              end
              INP, OUT: begin
                ctrl_signals.Stack_ctrl.cycle_ctrl = PCC;
                ctrl_signals.A.re = 1'b1;
                ctrl_signals.DBR.we = 1'b1;
              end
            endcase
          end
          T2: begin 
            next_state = T3;

            unique case (instr)
              LMI, LrI, ALUI, JMP, JFc, JTc, CAL, CTc, CFc: begin
                ctrl_signals.Stack_ctrl.re_Stack = 1'b1;
                ctrl_signals.Stack_ctrl.lower = 1'b0;
                ctrl_signals.DBR.we = 1'b1;
                ctrl_signals.Stack_ctrl.cycle_ctrl = PCR;

                ctrl_signals.Stack_ctrl.inc_PC = 1'b1;  // Inc in T2 so PC_H unchanged
              end
              LrM, LMr, ALUM: begin
                ctrl_signals.rf_ctrl.re = 1'b1;
                ctrl_signals.rf_ctrl.sel = Hi;
                ctrl_signals.Stack_ctrl.cycle_ctrl = (instr == LMr) ? PCW : PCR;
                ctrl_signals.DBR.we = 1'b1;
              end
              INP, OUT: begin
                ctrl_signals.Stack_ctrl.cycle_ctrl = PCC;
                ctrl_signals.B.re = 1'b1;
                ctrl_signals.DBR.we = 1'b1;
              end
            endcase
          end
          T3, WAIT, STOPPED: begin 
            unique case (instr)
              OUT, LMr: begin
                next_cycle = Ready ? CYCLE1 : CYCLE2;
                next_state = Ready ? T1 : WAIT;
              end
              LMI, JMP, JFc, JTc, CAL, CTc, CFc: begin
                next_state = Ready ? T1 : WAIT;
                next_cycle = Ready ? CYCLE3 : CYCLE2;
              end
              default: begin
                next_state = Ready ? T4 : WAIT; // WAIT state
              end
            endcase

            unique case (instr)
              INP, ALUM, ALUI, LrM, LMr, LMI, JMP, JFc, JTc, CAL, CTc, CFc: begin 
                // For control flow instructions, this is the lower address
                ctrl_signals.DBR.re = 1'b1;
                ctrl_signals.B.we = 1'b1;
              end
              LMr: begin
                ctrl_signals.DBR.we = 1'b1;
                ctrl_signals.B.re = 1'b1;
              end
              // OUT: begin
              //   // do nothing!
              // end
              //default: // do nothing!
            endcase
          end
          T4: begin 
            next_state = T5;

            if (instr == INP) begin
              ctrl_signals.DBR.we = 1'b1;
              ctrl_signals.flags.re = 1'b1; // Write flags into output
            end
            // else do nothing!
          end
          T5: begin 
            next_state = T1;
            next_cycle = CYCLE1;

            unique case (instr)
              LrM, LrI, INP: begin
                ctrl_signals.B.re = 1'b1;
                ctrl_signals.rf_ctrl.sel = (instr == INP) ? Acc : DDD;
                ctrl_signals.rf_ctrl.we = 1'b1;
              end
              ALUM, ALUI: begin
                // Execute alu op and affect flags
                ctrl_signals.rf_ctrl.sel = Acc;
                ctrl_signals.rf_ctrl.we = 1'b1;
                ctrl_signals.ALU.alu_op = D5_3;  // Set alu op based on instruction, add arith op?
                ctrl_signals.ALU.ARITH = 1'b0;
                ctrl_signals.ALU.re = 1'b1;
              end
            endcase
          end
          default: begin
            next_cycle = CYCLE1;
            next_state = T1;
          end
        endcase
      end
      CYCLE3: begin
        unique case (state)
          T1, T1I: begin 
            next_state = T2;

            unique case (instr)
              LMI: begin
                ctrl_signals.rf_ctrl.sel = Lo;
                ctrl_signals.rf_ctrl.re = 1'b1;
                ctrl_signals.DBR.we = 1'b1;
                ctrl_signals.Stack_ctrl.cycle_ctrl = PCW;
              end
              JMP, JFc, JTc, CAL, CTc, CFc: begin
                ctrl_signals.Stack_ctrl.re_Stack = 1'b1;
                ctrl_signals.Stack_ctrl.lower = 1'b1;
                ctrl_signals.DBR.we = 1'b1;
                ctrl_signals.Stack_ctrl.cycle_ctrl = PCR;
              end
            endcase
          end
          T2: begin 
            next_state = T3;

            unique case (instr)
              LMI: begin
                ctrl_signals.rf_ctrl.sel = Hi;
                ctrl_signals.rf_ctrl.re = 1'b1;
                ctrl_signals.DBR.we = 1'b1;
                ctrl_signals.Stack_ctrl.cycle_ctrl = PCW;
              end
              JMP, JFc, JTc, CAL, CTc, CFc: begin
                ctrl_signals.Stack_ctrl.re_Stack = 1'b1;
                ctrl_signals.Stack_ctrl.lower = 1'b0;
                ctrl_signals.DBR.we = 1'b1;
                ctrl_signals.Stack_ctrl.cycle_ctrl = PCR;

                ctrl_signals.Stack_ctrl.inc_PC = 1'b1;  // Inc in T2 so PC_H unchanged
              end
            endcase
          end
          T3, WAIT, STOPPED: begin 
            unique case (instr)
              LMI: begin
                next_state = T1;
                next_cycle = CYCLE1;
              end
              JFc, CFc: begin
                if (~CF) begin
                  next_state = T1;
                  next_cycle = CYCLE1;
                end
                else begin
                  next_state = Ready ? T4 : WAIT; // WAIT state
                end
              end
              JTc, CTc: begin
                if (CF) begin
                  next_state = T1;
                  next_cycle = CYCLE1;
                end
                else begin
                  next_state = Ready ? T4 : WAIT; // WAIT state
                end
              end
              default: next_state = Ready ? T4 : WAIT; // WAIT state
            endcase

            unique case (instr)
              LMI: begin
                ctrl_signals.B.re = 1'b1;
                ctrl_signals.DBR.we = 1'b1;
              end
              JMP, JFc, JTc, CAL, CTc, CFc: begin
                ctrl_signals.A.we = 1'b1;
                ctrl_signals.DBR.re = 1'b1;
              end
            endcase
          end
          T4: begin
            next_state = T5;

            unique case (instr)
              CAL, CTc, CFc: begin // Is there an issue where the stack isn't pushed early enough?
                
                
                ctrl_signals.A.re = 1'b1;
                ctrl_signals.Stack_ctrl.we_Stack = 
                  ((instr == CAL) | ((instr == CTc) & ~CF) | ((instr == CFc) & CF));
                ctrl_signals.Stack_ctrl.lower = 1'b0;

                ctrl_signals.SP_ctrl.inc_SP = 1'b1;
                ctrl_signals.SP_ctrl.en_SP = 
                  ((instr == CAL) | ((instr == CTc) & ~CF) | ((instr == CFc) & CF));
              end
              JMP, JFc, JTc: begin
                ctrl_signals.A.re = 1'b1;
                ctrl_signals.Stack_ctrl.we_Stack = ((instr == JMP) | ((instr == JTc) & ~CF) | ((instr == JFc) & CF));
                ctrl_signals.Stack_ctrl.lower = 1'b0;
              end
            endcase
          end
          T5: begin 
            next_state = T1;
            next_cycle = CYCLE1;

            unique case (instr)
              CAL, CTc, CFc, JMP, JFc, JTc: begin // Is there an issue where the stack isn't pushed early enough?
                ctrl_signals.B.re = 1'b1;
                ctrl_signals.Stack_ctrl.we_Stack = 1'b1;
                ctrl_signals.Stack_ctrl.lower = 1'b1;
              end
            endcase
          end
          default: begin
            next_state = T1;
            next_cycle = CYCLE1;
          end
        endcase
      end
      default: begin
        next_state = T1;
        next_cycle = CYCLE1;
      end
    endcase
  end


  always_ff @(posedge clk) begin
    if (rst) begin
      cycle <= CYCLE1;
      state <= T1;
      // RESET ctrl_signals as well?
    end
    else begin
      cycle <= next_cycle;
      state <= next_state;
    end
  end

endmodule: fsm_decoder

// Module for storing large amounts of information
module reg_file
#(parameter WIDTH = 8,
            HEIGHT = 8,
            SEL = $clog2(HEIGHT))
(inout tri [WIDTH-1:0] bus,
 input logic clk,
 input rf_ctrl_t rf_ctrl);

  logic [7:0] rf[HEIGHT];
  logic [7:0] rs;

  assign bus = (rf_ctrl.re) ? rs : 'bz;

  always_ff @(posedge clk)
    if (rf_ctrl.we)
      rf[rf_ctrl.sel] <= bus;

  always_comb
    rs = rf[rf_ctrl.sel];

endmodule: reg_file

module stack
#(parameter WIDTH = 14,
            BUS_WIDTH = 8,
            HEIGHT = 8,
            SEL = $clog2(HEIGHT))
(inout tri [BUS_WIDTH-1:0] bus,
 input logic [SEL-1:0] sel,
 input logic clk,
 input Stack_ctrl_t Stack_ctrl);

  logic [13:0] rf[8];
  logic [13:0] rs;

  assign bus = (Stack_ctrl.re_Stack) ? 
    (Stack_ctrl.lower ? rs[7:0] : {Stack_ctrl.cycle_ctrl, rs[13:8]}) 
    : 'bz;

  always_ff @(posedge clk)
    if (Stack_ctrl.we_Stack && Stack_ctrl.lower)
      rf[sel][13:0] <= Stack_ctrl.D5_3 ? bus[5:3] : bus;
    else if (Stack_ctrl.we_Stack && ~Stack_ctrl.lower)
      rf[sel][13:8] <= bus[3:0];
    else if (Stack_ctrl.inc_PC)
      rf[sel] <= rf[sel] + 1;

  always_comb
    rs = rf[sel];

endmodule: stack

module Stabilizer
  (input logic d, clk,
   output logic Q);
  logic temp;

  always_ff @(posedge clock) begin
    temp <= d;
    Q <= temp;
  end

endmodule: Stabilizer

module Register
 #(parameter WIDTH = 8)
  (input logic en, clear, clk,
   input logic [7:0] d,
   output logic [7:0] Q);

  always_ff @(posedge clock) begin
    if (en)
      Q <= d;
    else if (clear)
      Q <= 'd0;
  end
endmodule: Register

module BusDriver
 #(parameter WIDTH = 8)
  (input logic en,
   input logic [7:0] data,
   output logic [7:0] buff,
   inout tri [7:0] bus);

  assign buff = bus;
  assign bus = en ? data : 'bz;

endmodule: BusDriver

module Counter
 #(parameter WIDTH = 8)
  (input logic en, clear, load, up, clk,
   input logic [7:0] d,
   output logic [7:0] Q);

   always_ff @(posedge clock) begin
     if (clear)
       Q <= 'd0;
     else if (load)
       Q <= d;
     else if (en && up)
       Q <= Q + 1;
     else if (en && ~up)
       Q <= Q - 1;
   end
endmodule: Counter

`default_nettype wire