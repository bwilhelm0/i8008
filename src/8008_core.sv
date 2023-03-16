`include "internal_defines.vh"

`default_nettype none

module 8008_core
  #(parameter WIDTH = 8)
  (input logic [WIDTH-1:0] D_in,
    input logic Intr, Ready, clk1, clk2,
    output logic [WIDTH-1:0] D_out,
    output logic Sync,
    output state_t state);

  logic [WIDTH-1:0] bus;
  logic [WIDTH-1:0] instr;

  // // State logic
  cycle_t cycle;
  // state_t state;

  // Stabilize async inputs?? Maybe only need flip flop
  Flipper R (.D(Ready), .clock(), .Q());
  Flipper I (.D(Intr), .clock(), .Q());

  // Shouldn't be a register, just a bus buffer
  // But since there's 8 ins and outs, use buffer for out
  Register DBR #(.WIDTH) ();  // Enable is tied to ready or a ctrl signal

  Register IR #(.WIDTH) (.Q(instr));

  Register A #(.WIDTH) (.D(A_in), .Q(A_out), .clock(), .en(), .clear());
  Register B #(.WIDTH) (.D(B_in), .Q(B_out), .clock(), .en(), .clear());
  ALU Unit ();
  Register flag_reg #(.WIDTH($bits(flags_t))) (.D(flag_in), .Q(flag_out), .clock(), .en(), .clear());

  Decoder Dec (.instr, .cycle);
  Timing_ctrl TC ();

  reg_file rf #(.WIDTH, .HEIGHT(8)) (.bus, .sel(), .we(), re(), .clk());
  reg_file Stack #(.WIDTH(14), .HEIGHT(8)) (.bus, .sel(), .we(), re(), .clk());

  fsm controller (.state, .cycle, .clk());
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

    Adder add (.A, .B, .D(add_tmp), .flags(add_flags));
    Arithmetic art (.A, .B, .D(art_tmp), .flags(art_flags));

    // Choose output based on alu_op

endmodule: ALU

module Decoder
  (input logic [7:0] instr,
   input cycle_t cycle,
   output logic [6:0] decoded,
   output ctrl_signals_t output ctrl_signals,
   output cycle_ctrl_t cycle_ctrl
   );

  logic [1:0] D7_6 = instr[7:6];
  logic [2:0] D5_3 = instr[5:3];
  logic [2:0] D2_0 = instr[2:0];

  always_comb begin
    unique case (D7_6) 
      LOAD: begin
        unique case (D5_3)
          // Perform load cases
          Hi_MEM: // Check these first two cases for halts
          Hi_MACH:
          default:
        endcase
      end
      ALU_IND_MEM: begin
      end
      IO_CTRL: begin
      end
      IMM_MISC: begin
      end
    endcase
  end

endmodule: Decoder

module fsm
  (input logic clk, Ready, Intr, rst, CF, // CF condition failure
   output state_t state,
   output cycle_t cycle
   output cycle_ctrl_t cycle_ctrl);

  always_comb begin
    next_cycle = cycle;
    unique case (state) 
      T1: next_state = T2;
      T1I: next_state = T2;

      T2: next_state = Ready ? T3 : WAIT;
      WAIT: next_state = Ready ? T3 : WAIT;
      STOPPED: begin 
        next_state = Intr ? T1I : STOPPED;
      end

      T3: begin
        unique case (cycle) 
          CYCLE1: begin
            unique case (instr) 
              HLT: next_state = Intr ? T1I : STOPPED; 
              RET: begin
                if (CF) begin
                  next_cycle = CYCLE1;
                  next_state = T1;
                end 
                else begin
                  next_state = T4;
                end
              end
              LrM, ALUM, ALUI, INP, OUT, LrI, JMP, CAL: begin
                next_cycle = CYCLE2;
                next_state = T1;
              end
            endcase
          end
          CYCLE2: begin
            unique case (instr)
              OUT, LMr: begin
                next_cycle = CYCLE1;
                next_state = T1;
              end
              LMI, JMP, CAL: begin
                next_state = T1; 
                next_cycle = CYCLE3;
              end
              default: begin
                next_state = T4;
              end
            endcase
          end
          CYCLE3: begin
            unique case (instr) 
              LMI: begin 
                next_state = T1;
                next_cycle = CYCLE1;
              end
              JMP, CAL: begin
                if (CF) begin
                  next_state = T1;
                  next_cycle = CYCLE1;
                end
                else begin
                  next_state = T4;
                end
              end
              default: next_state = T4;
            endcase
          end
          default: next_state = T4;
        endcase
      end


      T4: begin
        if (cycle == CYCLE1 && instr == LMr) begin
          next_state = T1;
          next_cycle = CYCLE2;
        end
        else begin
          next_state = T5;
        end
      end

      T5: begin 
        next_state = T1;
        next_cycle = CYCLE1;
      end

      default: begin 
        next_state = T1;
        next_cycle = CYCLE1;
      end
    endcase
  end

  always_ff @(posedge clk, rst) begin
    if (rst) begin
      cycle <= CYCLE1;
      state <= T1;
    end
    else begin
      cycle <= next_cycle;
      state <= next_state;
    end
  end

endmodule: fsm

// Module for storing large amounts of information
module reg_file
#(parameter WIDTH = 8,
            HEIGHT = 8,
            ADDR_WIDTH = $clog2(WIDTH))
(inout tri [WIDTH-1:0] bus,
 input logic [ADDR_WIDTH-1:0] sel,
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

`default_nettype wire