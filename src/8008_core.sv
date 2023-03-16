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
  (logic input [7:0] instr
  );
endmodule: Decoder

module fsm
  (input logic clk, Ready, Intr, rst,
   output state_t state,
   output cycle_t cycle
   output cycle_ctrl_t cycle_ctrl);

  always_comb begin
    unique case (state) begin
      T1: next_state = T2;
      T1I: next_state = T2;

      T2: next_state = ready ? T3 : WAIT;
      WAIT: next_state = ready ? T3 : WAIT;

      T3: begin
        unique case (cycle) begin
          CYCLE1:
          CYCLE2:
          CYCLE3: 
          default: next_cycle = T1;
        endcase
      end

      STOPPED: next_state = Intr ? T1I : STOPPED;

      T4: next_state = (cycle == CYCLE1 && instr == LMr) ? T1 : T5;
      T5: next_state = T1;
      default: next_state = T1;
    endcase

    if (next_state == T1) begin
      unique case (cycle) begin
        CYCLE1: next_cycle = CYCLE2;
        CYCLE2: next_cycle = CYCLE3;
        CYCLE3: next_cycle = CYCLE1;
        default: next_cycle = CYCLE1;
      endcase
    end
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