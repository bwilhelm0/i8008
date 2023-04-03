`include "internal_defines.vh"

`default_nettype none

module 8008_core
  #(parameter WIDTH = DATA_WIDTH,
              STACK_HEIGHT = 8)
  (input logic [WIDTH-1:0] D_in,
   input logic INTR, READY, clk1, clk2,
   output logic [WIDTH-1:0] D_out,
   output logic Sync,
   output state_t state);

  logic [WIDTH-1:0] bus;
  logic [WIDTH-1:0] instr;
  logic enable_SP;

  // // State logic
  cycle_t cycle;
  // state_t state;

  // Stabilize async inputs?? Maybe only need flip flop
  Stabilizer R (.D(READY), .clk, .Q(Ready));
  Stabilizer I (.D(INTR), .clk, .Q(Intr));

  // Shouldn't be a register, just a bus buffer
  // But since there's 8 ins and outs, use buffer for out
  // TODO: Connect DBR enable to Ready?? 
  // I think add an in, and out buffer for ease of use
  BusDriver #(.WIDTH) DBRdriver (.en(re_DBR), .data(B_out), .buff(B_in), .bus);
  Register #(.WIDTH) DBR (.D(bus), .Q(D_out), .clk, .en(we_DBR), .clear(clr_DBR));  // Enable is tied to ready or a ctrl signal
  Register #(.WIDTH) IR (.D(bus), .Q(instr), .clk, .en(we_IR), .clear(clr_IR));

  BusDriver #(.WIDTH) Adriver (.en(re_A), .data(A_out), .buff(A_in), .bus);
  BusDriver #(.WIDTH) Bdriver (.en(re_B), .data(B_out), .buff(B_in), .bus);
  Register #(.WIDTH) A (.D(A_in), .Q(A_out), .clk, .en(we_A), .clear(clr_A));
  Register #(.WIDTH) B (.D(B_in), .Q(B_out), .clk, .en(we_B), .clear(clr_B));

  BusDriver #(.WIDTH) ALUdriver (.en(re_ALU), .data(ALU_out), .buff('d0), .bus);
  ALU Unit (.A(A_out), .B(B_out), .alu_op(), .D(ALU_out), .flags(flag_in));

  reg_file #(.WIDTH(DATA_WIDTH), .HEIGHT(7)) rf (.bus, .sel(sel_rf), .we(we_rf), .re(re_rf), .clk);

  assign enable_SP = en_SP & ~((sel_Stack == 'd0) & ~inc_SP);
  Counter #(.WIDTH($clog2(STACK_HEIGHT))) (.en(enable_SP), .clear(clr_SP), .load('d0), .up(inc_SP), .clk, .D('d0), .Q(sel_Stack));
  stack #(.WIDTH(14), .HEIGHT(STACK_HEIGHT)) Stack (.bus, .sel(sel_Stack), .we(we_Stack), .re(re_Stack), .clk, .lower(lower), .incr(inc_PC), .en(en_PC));
endmodule: 8008_core

module ALU
   #(parameter WIDTH = 8)
    (input logic [WIDTH-1:0] A, B,
     input alu_op_t alu_op,
     output logic [WIDTH-1:0] D,
     output flags_t flags);

  logic [WIDTH-1:0] add_tmp;
  logic [WIDTH-1:0] art_tmp;

  flags_t add_flags, art_flags;

  // TODO: reformat ALU so can input separate ALU/arith ops

  Register #(.WIDTH($bits(flags_t))) flag_reg (.D(flag_in), .Q(flag_out), .clock(), .en(en_Flag), .clear(clr_Flag));

  always_comb begin
    flag_in.CARRY = 1'b0;
    unique case (alu_op)
      ADD: {flag_in.CARRY, D} = A + B;
      ADD1: {flag_in.CARRY, D} = A + 1;
      ADDC: {flag_in.CARRY, D} = A + B + (flag_out & CARRY);
      SUB: {flag_in.CARRY, D} = A - B;
      SUB1: {flag_in.CARRY, D} = A - 1;
      SUBC: {flag_in.CARRY, D} = A - B - (flag_out & CARRY);
      AND: D = A & B;
      OR: D = A | B;
      XOR: D = A ^ B;
      RLC: begin
        D = {A[6:0], A[7]};
        flag_in.CARRY = A[7];
      end
      RRC: begin
        D = {A[0], A[7:1]};
        flag_in.CARRY = A[0];
      end
      RAL: begin
        D = {A[6:0], flag_out.CARRY};
        flag_in.CARRY = A[7];
      end
      RAR: begin
        D = {flag_out.CARRY, A[7:1]};
        flag_in.CARRY = A[0];
      end
      default: D = 0;
    endcase
  end

  flag_in.SIGN = D[7];
  flag_in.PARITY = ^D;
  flag_in.ZERO = ~(|D);

    // Adder add (.A, .B, .D(add_tmp), .flags(add_flags));
    // Arithmetic art (.A, .B, .D(art_tmp), .flags(art_flags));

    // Choose output based on alu_op

endmodule: ALU

module fsm_decoder
  (input logic clk, Ready, Intr, rst, CF, // CF condition failure
   input logic [7:0] instr,
   input flags_t flags,
   output ctrl_signals_t ctrl_signals,
   output state_t state);

  logic [2:0] SSS = instr[2:0];
  logic [2:0] DDD = instr[5:3];
  cycle_t cycle;

  // Should flags be one hot, or fully encoded?
  // logic CF = 

  // TODO: Make sure all internal states are represented, 
  // How does T1I work? Why no PC increment?
  // TODO: Fix Conditional instruction logic


  always_comb begin
    next_cycle = cycle;
    out_state = state;
    ctrl_signals = 'd0; // Should these be initialized to X's? No, apparently doesn't minimize logic
    unique case (cycle)
      CYCLE1: begin
        unique case (state)
          T1, T1I: begin // INCR PC??
            next_state = T2;

            ctrl_signals.we_DBR = 1'b1;
            ctrl_signals.re_Stack = 1'b1;
            ctrl_signals.lower_Stack = PC_L;

            ctrl_signals.inc_PC = 1'b1;
            ctrl_signals.en_PC = 1'b1;
          end
          T2: begin 
            next_state = T3;

            ctrl_signals.we_DBR = 1'b1;
            ctrl_signals.re_Stack = 1'b1;
            ctrl_signals.lower_Stack = PC_H;

            ctrl_signals.cycle_ctrl = PCI;
          end
          T3, WAIT, STOPPED: begin
            if (instr == RST) begin
              ctrl_signals.we_B = 1'b1;
              ctrl_signals.clr_A = 1'b1;
              ctrl_signals.inc_SP = 1'b1;
              ctrl_signals.en_SP = 1'b1;
              ctrl_signals.re_DBR = 1'b1;
            end
            else begin
              ctrl_signals.we_IR = 1'b1;
              ctrl_signals.we_B = 1'b1;
              ctrl_signals.re_DBR = 1'b1;
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
                if (CF) begin
                  next_cycle = CYCLE1;
                  next_state = T1;
                end 
                else begin
                  next_state = Ready ? T4 : WAIT; // WAIT state
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
                  ctrl_signals.we_B = 1'b1;
                  ctrl_signals.re_rf = 1'b1;
                  ctrl_signals.sel_rf = SSS;
                  ctrl_signals.we_DBR = 1'b1;
                end
              end
              INr, DCr: begin 
                // Deal with HALT case and mem case for INr/DCr? No, shouldn't get here
                ctrl_signals.re_rf = 1'b1;
                ctrl_signals.sel_rf = DDD;
                ctrl_signals.we_A = 1'b1;
              end
              RLC, RRC, RAL, RAR: begin
                // read Accum into A alu reg
                ctrl_signals.re_rf = 1'b1;
                ctrl_signals.sel_rf = A;
                ctrl_signals.we_A = 1'b1;
              end
              RET: begin // Pop stack
                ctrl_signals.inc_SP = 1'b0;
                ctrl_signals.en_SP = 1'b1;
              end
              RFc, RTc: begin // Pop stack conditionally
                ctrl_signals.inc_SP = 1'b0;
                ctrl_signals.en_SP = ~CF;
              end
              RST: begin
                ctrl_signals.re_A = 1'b1;
                ctrl_signals.lower = 1'b0;
                ctrl_signals.we_Stack = 1'b1;
              end
              default: begin
                // Do nothing!
              end
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
                ctrl_signals.re_B = 1'b1;
                ctrl_signals.we_Stack = 1'b1;
                ctrl_signals.lower = 1'b1; // What to do here since only want D5-3?
                ctrl_signals.D5_3 = 1'b1;
              end
              INr, DCr: begin
                ctrl_signals.we_rf = 1'b1;
                ctrl_signals.sel_rf = DDD;
                ctrl_signals.alu_op = instr == INr ? ADD1 : SUB1;
                ctrl_signals.en_flags = 1'b1;
              end 
              ALU_op: begin
                ctrl_signals.we_rf = 1'b1;
                ctrl_signals.sel_rf = A;
                ctrl_signals.alu_op = ; // Enter ops for ALU commands
                ctrl_signals.en_flags = 1'b1;
              end
              RLC, RRC, RAL, RAR: begin
                ctrl_signals.we_rf = 1'b1;
                ctrl_signals.sel_rf = A;
                ctrl_signals.alu_op = ; // Enter ops for rotate commands
                ctrl_signals.en_flags = 1'b1;
              end
              RET, RFc, RTc: // do nothing!
              default: // do nothing!
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
                ctrl_signals.re_Stack = 1'b1;
                ctrl_signals.lower = 1'b1;
                ctrl_signals.we_DBR = 1'b1;
                ctrl_signals.cycle_ctrl = PCR;

                ctrl_signals.inc_PC = 1'b1;
                ctrl_signals.en_PC = 1'b1;
              end
              LrM, LMr, ALUM: begin
                ctrl_signals.re_rf = 1'b1;
                ctrl_signals.sel_rf = L;
                ctrl_signals.cycle_ctrl = (instr == LMr) ? PCW : PCR;
                ctrl_signals.we_DBR = 1'b1;
              end
              INP, OUT: begin
                ctrl_signals.cycle_ctrl = PCC;
                ctrl_signals.re_A = 1'b1;
                ctrl_signals.we_DBR = 1'b1;
              end
            endcase
          end
          T2: begin 
            next_state = T3;

            unique case (instr)
              LMI, LrI, ALUI, JMP, JFc, JTc, CAL, CTc, CFc: begin
                ctrl_signals.re_Stack = 1'b1;
                ctrl_signals.lower = 1'b0;
                ctrl_signals.we_DBR = 1'b1;
                ctrl_signals.cycle_ctrl = PCR;
              end
              LrM, LMr, ALUM: begin
                ctrl_signals.re_rf = 1'b1;
                ctrl_signals.sel_rf = H;
                ctrl_signals.cycle_ctrl = (instr == LMr) ? PCW : PCR;
                ctrl_signals.we_DBR = 1'b1;
              end
              INP, OUT: begin
                ctrl_signals.cycle_ctrl = PCC;
                ctrl_signals.re_B = 1'b1;
                ctrl_signals.we_DBR = 1'b1;
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

            unique case (instr)
              INP, ALUM, ALUI, LrM, LMr, LMI, JMP, JFc, JTc, CAL, CTc, CFc: begin 
                // For control flow instructions, this is the lower address
                ctrl_signals.re_DBR = 1'b1;
                ctrl_signals.we_B = 1'b1;
              end
              LMr: begin
                ctrl_signals.we_DBR = 1'b1;
                ctrl_signals.re_B = 1'b1;
              end
              OUT: begin
                // do nothing!
              end
              default: // do nothing!
            endcase
          endcase
          end
          T4: begin 
            next_state = T5;

            if (instr == INP) begin
              ctrl_signals.we_DBR = 1'b1;
              ctrl_signals.re_flags = 1'b1; // Write flags into output
            end
            // else do nothing!
          end
          T5: begin 
            next_state = T1;
            next_cycle = CYCLE1;

            unique case (instr)
              LrM, LRI, INP: begin
                ctrl_signals.re_B = 1'b1;
                ctrl_signals.sel_rf = instr == INP ? A : DDD;
                ctrl_signals.we_rf = 1'b1;
              end
              ALUM, ALUI: begin
                // Execute alu op and affect flags
                ctrl_signals.sel_rf = A;
                ctrl_signals.we_rf = 1'b1;
                ctrl_signals.alu_op = asdf;  // Set alu op based on instruction, add arith op?
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
                ctrl_signals.sel_rf = L;
                ctrl_signals.re_rf = 1'b1;
                ctrl_signals.we_DBR = 1'b1;
                ctrl_signals.cycle_ctrl = PCW;
              end
              JMP, JFc, JTc, CAL, CTc, CFc: begin
                ctrl_signals.re_Stack = 1'b1;
                ctrl_signals.lower = 1'b1;
                ctrl_signals.we_DBR = 1'b1;
                ctrl_signals.cycle_ctrl = PCR;

                ctrl_signals.inc_PC = 1'b1;
                ctrl_signals.en_PC = 1'b1;
              end
            endcase
          end
          T2: begin 
            next_state = T3;

            unique case (instr)
              LMI: begin
                ctrl_signals.sel_rf = H;
                ctrl_signals.re_rf = 1'b1;
                ctrl_signals.we_DBR = 1'b1;
                ctrl_signals.cycle_ctrl = PCW;
              end
              JMP, JFc, JTc, CAL, CTc, CFc: begin
                ctrl_signals.re_Stack = 1'b1;
                ctrl_signals.lower = 1'b0;
                ctrl_signals.we_DBR = 1'b1;
                ctrl_signals.cycle_ctrl = PCR;
              end
            endcase
          end
          T3, WAIT, STOPPED: begin 
            unique case (instr)
              LMI: begin
                next_state = T1;
                next_cycle = CYCLE1;
              end
              JTc, JFc, CFc, CTc: begin
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
                ctrl_signals.re_B = 1'b1;
                ctrl_signals.we_DBR = 1'b1;
              end
              JMP, JFc, JTc, CAL, CTc, CFc: begin
                ctrl_signals.we_A = 1'b1;
                ctrl_signals.re_DBR = 1'b1;
              end
            endcase
          end
          T4: begin
            next_state = T5;

            unique case (instr)
              CAL, CTc, CFc: begin // Is there an issue where the stack isn't pushed early enough?
                ctrl_signals.re_A = 1'b1;
                ctrl_signals.we_Stack = ((instr == CAL) | ~CF);
                ctrl_signals.lower = 1'b0;
                ctrl_signals.inc_SP = 1'b1;
                ctrl_signals.en_SP = ((instr == CAL) | ~CF);
              end
              JMP, JFc, JTc: begin
                ctrl_signals.re_A = 1'b1;
                ctrl_signals.we_Stack = ((instr == JMP) | ~CF);
                ctrl_signals.lower = 1'b0;
              end
            endcase
          end
          T5: begin 
            next_state = T1;
            next_cycle = CYCLE1;

            unique case (instr)
              CAL, CTc, CFc, JMP, JFc, JTc: begin // Is there an issue where the stack isn't pushed early enough?
                ctrl_signals.re_B = 1'b1;
                ctrl_signals.we_Stack = 1'b1;
                ctrl_signals.lower = 1'b1;
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
 input logic [SEL-1:0] sel,
 input logic we, re, clk);

  logic [WIDTH-1:0] rf[HEIGHT];
  logic [WIDTH-1:0] rs;

  assign bus = (re) ? rs: 'bz;

  always_ff @(posedge clock)
    if (we)
      rf[sel] <= bus;

  always_comb
    rs = rf[sel];

endmodule: reg_file

module stack
#(parameter WIDTH = 14,
            BUS_WIDTH = 8,
            HEIGHT = 8,
            SEL = $clog2(HEIGHT))
(inout tri [BUS_WIDTH-1:0] bus,
 input logic [SEL-1:0] sel,
 input logic we, re, clk, lower);

  logic [WIDTH-1:0] rf[HEIGHT];
  logic [WIDTH-1:0] rs;

  assign bus = (re) ? (lower ? rs[BUS_WIDTH-1:0] : {'d0, rs[WIDTH-1:BUS_WIDTH]}) : 'bz;

  always_ff @(posedge clock)
    if (we && lower)
      rf[sel][BUS_WIDTH-1:0] <= bus;
    else if (we && ~lower)
      rf[sel][WIDTH-1:BUS_WIDTH] <= bus[WIDTH-BUS_WIDTH-1:0];

  always_comb
    rs = rf[sel];

endmodule: stack

// module Decoder
//   (input logic clk, Ready, Intr, rst, CF, // CF condition failure
//    input logic [7:0] instr,
//    input cycle_t cycle,
//    output logic [6:0] decoded,
//    output ctrl_signals_t ctrl_signals,
//    output instr_t op,
//    output state_t state,
//    output cycle_t cycle
//    output cycle_ctrl_t cycle_ctrl);

//   logic [1:0] D7_6 = instr[7:6];
//   logic [2:0] D5_3 = instr[5:3];
//   logic [2:0] D2_0 = instr[2:0];

//   logic r1 = instr[5:3];
//   logic r2 = instr[2:0];

//   logic [2:0] DDD = instr[5:3];
//   logic [2:0] SSS = instr[2:0];

//   logic true_flag = instr[5];
//   flags_t flags = instr[4:3];

//   logic IO_instr = instr[0];
//   logic [1:0] RR = instr[5:4];
//   logic [2:0] MMM = instr[3:1];

//   // TODO: Don't set a specific operation, set ctrl signals??
//   // Nah, easier to set op for fsm
//   always_comb begin
//     next_cycle = cycle;
//     unique case (D7_6) 
//       LOAD: begin
//         unique case (D5_3)
//           // Perform load cases
//           // Check first cases for halts
//           Hi_MEM: begin 
//             op = D2_0 == Lo_MEM ? HLT : LMr;
//           end
//           default: begin
//             op = D2_0 == Lo_MEM ? LrM : Lr1r2;
//           end
//         endcase
//       end
//       ALU_IND_MEM: begin
//         unique case (D5_3)
//           ADx: op = Lo_MEM == D2_0 ? ADM : ADr;
//           ACx: op = Lo_MEM == D2_0 ? ACM : ACr;
//           SUx: op = Lo_MEM == D2_0 ? SUM : SUr;
//           SBx: op = Lo_MEM == D2_0 ? SBM : SBr;
//           NDx: op = Lo_MEM == D2_0 ? NDM : NDr;
//           XRx: op = Lo_MEM == D2_0 ? XRM : XRr;
//           ORx: op = Lo_MEM == D2_0 ? ORM : ORr;
//           CPx: op = Lo_MEM == D2_0 ? CPM : CPr;
//         endcase
//       end
//       IO_CTRL: begin
//         unique case (D2_0)
//           Lo_JMP: begin 
//             op = JMP;
//           end
//           Lo_JXc: begin
//             ctrl_signals.flags = flags;
//             op = true_flag ? JTc : JFc;
//           end
//           Lo_CAL: begin 
//             op = CAL;
//           end
//           Lo_CXc: begin
//             ctrl_signals.flags = flags;
//             op = true_flag ? CTc : CFc;
//           end
//           default: begin
//             op = IO_instr ? (RR == 2'd0 ? INP : OUT) : INVALID;
//           end
//         endcase
//       end
//       IMM_MISC: begin
//         unique case (D2_0)
//           Lo_RST: begin 
//             op = RST;
//           end
//           Lo_RXc: begin
//             ctrl_signals.flags = flags;
//             op = true_flag ? RTc : RFc;
//           end
//           Lo_RET: begin 
//             op = RET;
//           end
//           Lo_INr: begin
//             op = INr;
//           end
//           Lo_DCr: begin 
//             op = DCr;
//           end
//           Lo_ROT: begin
//             unique case (D5_3)
//               Hi_RLC: op = RLC;
//               Hi_RRC: op = RRC;
//               Hi_RAL: op = RAL;
//               Hi_RAR: op = RAR;
//             endcase
//           end
//           Lo_ALU: begin 
//             unique case (D5_3)
//               ADx: op = ADI;
//               ACx: op = ACI;
//               SUx: op = SUI;
//               SBx: op = SBI;
//               NDx: op = NDI;
//               XRx: op = XRI;
//               ORx: op = ORI;
//               CPx: op = CPI;
//             endcase
//           end
//           Lo_LOAD: begin
//             op = Hi_MEM == D5_3 ? LMI : LrI;
//           end
//         endcase
//       end
//     endcase
//   end



//   always_ff @(posedge clk, rst) begin
//     if (rst) begin
//       cycle <= CYCLE1;
//       state <= T1;
//     end
//     else begin
//       cycle <= next_cycle;
//       state <= next_state;
//     end
//   end

// endmodule: Decoder

// module fsm
//   (input logic clk, Ready, Intr, rst, CF, // CF condition failure
//    output state_t state,
//    output cycle_t cycle
//    output cycle_ctrl_t cycle_ctrl);

//   always_comb begin
//     next_cycle = cycle;
//     unique case (state) 
//       T1: next_state = T2;
//       T1I: next_state = T2;

//       T2: next_state = Ready ? T3 : WAIT;
//       WAIT: next_state = Ready ? T3 : WAIT;
//       STOPPED: begin 
//         next_state = Intr ? T1I : STOPPED;
//       end

//       T3: begin
//         unique case (cycle) 
//           CYCLE1: begin
//             unique case (instr) 
//               HLT: next_state = Intr ? T1I : STOPPED; 
//               RET: begin
//                 if (CF) begin
//                   next_cycle = CYCLE1;
//                   next_state = T1;
//                 end 
//                 else begin
//                   next_state = T4;
//                 end
//               end
//               LrM, ALUM, ALUI, INP, OUT, LrI, JMP, CAL: begin
//                 next_cycle = CYCLE2;
//                 next_state = T1;
//               end
//             endcase
//           end
//           CYCLE2: begin
//             unique case (instr)
//               OUT, LMr: begin
//                 next_cycle = CYCLE1;
//                 next_state = T1;
//               end
//               LMI, JMP, CAL: begin
//                 next_state = T1; 
//                 next_cycle = CYCLE3;
//               end
//               default: begin
//                 next_state = T4;
//               end
//             endcase
//           end
//           CYCLE3: begin
//             unique case (instr) 
//               LMI: begin 
//                 next_state = T1;
//                 next_cycle = CYCLE1;
//               end
//               JMP, CAL: begin
//                 if (CF) begin
//                   next_state = T1;
//                   next_cycle = CYCLE1;
//                 end
//                 else begin
//                   next_state = T4;
//                 end
//               end
//               default: next_state = T4;
//             endcase
//           end
//           default: next_state = T4;
//         endcase
//       end


//       T4: begin
//         if (cycle == CYCLE1 && instr == LMr) begin
//           next_state = T1;
//           next_cycle = CYCLE2;
//         end
//         else begin
//           next_state = T5;
//         end
//       end

//       T5: begin 
//         next_state = T1;
//         next_cycle = CYCLE1;
//       end

//       default: begin 
//         next_state = T1;
//         next_cycle = CYCLE1;
//       end
//     endcase
//   end

//   always_ff @(posedge clk, rst) begin
//     if (rst) begin
//       cycle <= CYCLE1;
//       state <= T1;
//     end
//     else begin
//       cycle <= next_cycle;
//       state <= next_state;
//     end
//   end

// endmodule: fsm

`default_nettype wire