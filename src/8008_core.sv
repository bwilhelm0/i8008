`default_nettype none

typedef enum logic [2:0] {
    T1 = 3'b010,
    T1I = 3'b110,
    T2 = 3'b100,
    WAIT = 3'b000,
    T3 = 3'b001,
    STOPPED = 3'b011,
    T4 = 3'b111,
    T5 = 3'b101
} state_t;

typedef struct packed {
    logic Z,
    logic C,
    logic S,
    logic P
} flags_t;

typedef enum {
    ADD,
    SUB,
    AND,
    XOR,
    OR,
    COMP,
    ROT
} alu_op_t;

module 8008_core
    #(parameter WIDTH = 8);
    (input logic [WIDTH-1:0] D_in,
     input logic INT, Ready, clk1, clk2,
     output logic [WIDTH-1:0] D_out,
     output logic Sync,
     output state_t state);

    Register A #(.WIDTH, .RESET_VAL('d0)) (.D(A_in), .Q(A_out), .clk(), .en(), .clr());
    Register B #(.WIDTH, .RESET_VAL('d0)) (.D(B_in), .Q(B_out), .clk(), .en(), .clr());
    ALU Unit ();

endmodule: 8008_core

module ALU
   #(parameter WIDTH = 8);
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

module Stack
    #(parameter WIDTH = 14,
                HEIGHT = 8);
    (input logic [$clog2(HEIGHT)-1:0] sel,
     input logic [WIDTH-1:0] D,
     input logic we, re, clk,
     output logic [WIDTH-1:0] SP);

    Register #(.WIDTH, .RESET_VAL('d0)) stack[HEIGHT] (.D, .clk, .en(we), .clr(1'd0), .Q);

    assign SP = re ? stack[sel].Q : 'bz;

endmodule: Stack

module Register
    #(parameter WIDTH = 8,
                RESET_VAL = 'd0);
    (input logic [WIDTH-1:0] D,
     input logic clk, en, clear,
     output logic [WIDTH-1:0] Q);

     always_ff @(posedge clk) begin
        if (clear) 
            Q <= 'd0;
        else if (clk && en)
            Q <= D;
     end

endmodule: Register

`default_nettype wire