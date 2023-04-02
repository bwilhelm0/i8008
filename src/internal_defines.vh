`ifndef INTERNAL_DEFINES_VH_
`define INTERNAL_DEFINES_VH_

// The current state of proc, also to be output
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

// The memory cycle number, needed to determine state transitions
typedef enum logic [1:0] {
    CYCLE1 = 2'b00,
    CYCLE2 = 2'b01,
    CYCLE3 = 2'b10
} cycle_t;

typedef enum logic [1:0] {
    PCI = 2'b00,    // Designates the address is for a memory read (first byte of instruction)
    PCR = 2'b01,    // Designates the address is for a memory read data (additional bytes of instruction or data)
    PCC = 2'b10,    // Designates the data as a command I/O operation
    PCW = 2'b11     // Designates the address is for a memory write data
} cycle_ctrl_t;

typedef enum logic [2:0] {
    A = 3'd0,
    B = 3'd1,
    C = 3'd2,
    D = 3'd3,
    E = 3'd4,
    Hi = 3'd5,      // Upper 6 bits of external register stored here
    Lo = 3'd6,      // Lower 8 bits of external register stored here
    ILLEGAL = 3'd7  // Cannot use this, reserved for instructions
} reg_t;

typedef struct packed {
    logic en;
    logic clear;
} reg_ctrl_t;

typedef enum logic [1:0] {
    C = 2'b00,      // Carry
    Z = 2'b01,      // Zero
    S = 2'b10,      // Sign
    P = 2'b11       // Parity
} flags_t;

typedef enum logic [2:0] {
    ADD,            // Addition
    SUB,            // Subtraction
    AND,            // Logical And
    XOR,            // Exclusive Or
    OR,             // Inclusive Or
    COMP,           // Compare
    ROT             // Rotate
} alu_op_t;

typedef struct packed {
    logic rfWrite;          // write GPR
    logic mem2RF;           // memory load result write to GPR
    logic pc2RF;            // PC+4 write to GPR (link)
    logic memRead;          // load instruction
    logic memWrite;         // store instruction
    alu_op_t alu_op;        // The ALU operation to perform
    flags_t flags;
} ctrl_signals_t;

`endif INTERNAL_DEFINES_VH_