`default_nettype none

// Module for choosing a high output line
// module Decoder
//  #(parameter WIDTH = 8,
//              IW = $clog2(WIDTH))
//   (input logic [IW-1:0] I,
//    input logic en,
//    output logic [WIDTH-1:0] D);

//   assign D = en ? ('d1 << I) : 'd0;

// endmodule: Decoder

// Module for shifting by 0-3
// module BarrelShifter
//   #(parameter WIDTH = 16,
//               byW = $clog2(WIDTH))
//   (input logic [WIDTH-1:0] V,
//    input logic [byW-1:0] by,
//    output logic [WIDTH-1:0] S);

//   assign S = V << by;

// endmodule: BarrelShifter

// Module for choosing one of the input bits
// module Multiplexer
//   #(parameter WIDTH = 8,
//               SW = $clog2(WIDTH))
//   (input logic [WIDTH-1:0] I,
//    input logic [SW-1:0] S,
//    output logic Y);

//   logic [WIDTH-1:0] X;

//   assign X = (I >> S);
//   assign Y = X[0];

// endmodule: Multiplexer

// Choose between two inputs
// module Mux2to1
//   #(parameter WIDTH = 8)
//   (input logic [WIDTH-1:0] I0, I1,
//    input logic S,
//    output logic [WIDTH-1:0] Y);

//   assign Y = S ? I1 : I0;

// endmodule: Mux2to1

// Outputs relative info about two numbers
// module MagComp
//   #(parameter WIDTH = 8)
//   (input logic [WIDTH-1:0] A, B,
//    output logic AltB, AeqB, AgtB);

//   assign AltB = (A < B);
//   assign AeqB = (A == B);
//   assign AgtB = (A > B);

// endmodule: MagComp

// Outputs if two numbers are equal
// module Comparator
//   #(parameter WIDTH = 8)
//   (input logic [WIDTH-1:0] A, B,
//    output logic AeqB);

//    assign AeqB = (A == B);

// endmodule: Comparator

// Module for adding two number with carry in and out
// module Adder
//   #(parameter WIDTH = 8)
//   (input logic [WIDTH-1:0] A, B,
//    input logic cin,
//    output logic [WIDTH-1:0] sum,
//    output logic cout);

//   assign {cout, sum} = A + B + cin;

// endmodule: Adder

// Module for storing a single bit
// module DFlipFlop
//   (input logic D, clock, reset_L, preset_L,
//    output logic Q);

//   always_ff @(posedge clock, negedge reset_L, negedge preset_L) begin
//     if(~reset_L)
//       Q <= 1'b0;
//     else if(~preset_L)
//       Q <= 1'b1;
//     else
//       Q <= D;
//   end

// endmodule: DFlipFlop

module Stabilizer
  (input logic D, clock,
   output logic Q);
  logic temp;

  always_ff @(posedge clock) begin
    temp <= D;
    Q <= temp;
  end

endmodule: Stabilizer

// Module for storing multiple bits
module Register
 #(parameter WIDTH = 8)
  (input logic en, clear, clock,
   input logic [WIDTH-1:0] D,
   output logic [WIDTH-1:0] Q);

  always_ff @(posedge clock) begin
    if (en)
      Q <= D;
    else if (clear)
      Q <= 'd0;
  end
endmodule: Register

// Module which can count up or down and load values
module Counter
 #(parameter WIDTH = 8)
  (input logic en, clear, load, up, clock,
   input logic [WIDTH-1:0] D,
   output logic [WIDTH-1:0] Q);

   always_ff @(posedge clock) begin
     if (clear)
       Q <= 'd0;
     else if (load)
       Q <= D;
     else if (en && up)
       Q <= Q + 1;
     else if (en && ~up)
       Q <= Q - 1;
   end
endmodule: Counter

module VarCounter
 #(parameter WIDTH = 8)
  (input logic en, clear, load, up, clock, 
   input logic [WIDTH-1:0] change,
   input logic [WIDTH-1:0] D,
   output logic [WIDTH-1:0] Q);

   always_ff @(posedge clock) begin
     if (clear)
       Q <= 'd0;
     else if (load)
       Q <= D;
     else if (en && up)
       Q <= Q + change;
     else if (en && ~up)
       Q <= Q - change;
   end
endmodule: VarCounter

// Module for synchronizing asynch inputs
module Synchronizer
  (input logic async, clock,
   output logic sync);
  logic out;

  DFlipFlop D1 (.D(async), .clock(clock), .Q(out), .reset_L(1'b1),
                .preset_L(1'b1));
  DFlipFlop D2 (.D(out), .clock(clock), .Q(sync), .reset_L(1'b1),
                .preset_L(1'b1));

endmodule: Synchronizer

// Shifts register by one left or right
module ShiftRegister_PIPO
 #(parameter WIDTH = 8)
  (input logic en, left, load, clock,
   input logic [WIDTH-1:0] D,
   output logic [WIDTH-1:0] Q);

   always_ff @(posedge clock) begin
     if (load)
       Q <= D;
     else if (en && left)
       Q <= Q << 1;
     else if (en && ~left)
       Q <= Q >> 1;
   end

endmodule: ShiftRegister_PIPO

// Places serial input on left or right
module ShiftRegister_SIPO
 #(parameter WIDTH = 8)
  (input logic serial, en, left, clock,
   output logic [WIDTH-1:0] Q);

   always_ff @(posedge clock) begin
     if (en && left)
       Q <= {serial, Q[WIDTH-1:1]};
     else if (en && ~left)
       Q <= {Q[WIDTH-2:0], serial};
   end

endmodule: ShiftRegister_SIPO

// Shifts register by 0-3
module BarrelShiftRegister
 #(parameter WIDTH = 8)
  (input logic en, load, clock,
   input logic [1:0] by,
   input logic [WIDTH-1:0] D,
   output logic [WIDTH-1:0]Q);

   always_ff @(posedge clock) begin
     if (load)
       Q <= D;
     else if (en)
       Q <= Q << by;
   end

endmodule: BarrelShiftRegister

// Module for storing large amounts of information
// module Memory
//  #(parameter DW = 16,
//              AW = 8,
//               W = 1 << AW)
//   (input logic re, we, clock,
//    input logic [AW-1:0] addr,
//    inout tri   [DW-1:0] data);

//   logic [DW-1:0] M[W];
//   logic [DW-1:0] rData;

//   assign data = (re) ? rData: 'bz;

//   always_ff @(posedge clock)
//     if (we)
//       M[addr] <= data;

//   always_comb
//     rData = M[addr];

// endmodule: Memory

// Intermediary driver for shared data line
module BusDriver
 #(parameter WIDTH = 8)
  (input logic en,
   input logic [WIDTH-1:0] data,
   output logic [WIDTH-1:0] buff,
   inout tri [WIDTH-1:0] bus);

  assign buff = bus;
  assign bus = en ? data : 'bz;

endmodule: BusDriver

// checking whether val is between low and high inclusive of bounds
module range_check
  #(parameter WIDTH = 8)
  (input logic [WIDTH-1:0] val, low, hi,
   output logic is_between);

  assign is_between = val >= low && val <= hi;

endmodule: range_check

// checking whether val is between low and low+delta
module offset_check
  #(parameter WIDTH = 8)
  (input logic [WIDTH-1:0] val, low, delta,
  output logic is_between);

  logic [WIDTH-1:0] sum;
  logic cout;

  // adder to add low to delta
  Adder #(WIDTH) add1(.A(low), .B(delta), .cin(1'b0), .sum, .cout);
  range_check #(WIDTH+1) range1 (.val({1'b0, val}), .low({1'b0, low}),
                            .hi({cout, sum}), .is_between);

endmodule: offset_check

`default_nettype wire