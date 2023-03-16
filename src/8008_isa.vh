

`ifndef 8008_ISA_VH_
`define 8008_ISA_VH_

/*----------------------------------------------------------------------------
 * Opcodes (All Instruction Types)
 *----------------------------------------------------------------------------*/

    typedef enum logic [2:0] {
        Lo_MEM = 3'b111,
        Lo_IMM_CAL = 3'b110,
        Lo_MACH = 3'b00x,
        Lo_DC = 3'bxxx
    } D2_0_t;

    typedef enum logic [2:0] {
        Hi_MEM = 3'b111,
        Hi_MACH = 3'b000,
        Hi_DC = 3'bxxx
    } D5_3_t;

    typedef enum logic [1:0] {
        LOAD = 2'b11,
        ALU_IND_MEM = 2'b10,
        IO_CTRL = 2'b01,
        IMM_MISC = 2'b00
    } D7_6_t;

    typedef enum logic [5:0] {
        // Index register instructions
        Lr1r2,      // Load r1 with r2
        LrM,        // Load r with Mem
        LMr,        // Load Mem with r
        LrI,        // Load r with Immediate
        LMI,        // Load Mem with Immediate
        INr,        // Increment r (r != A)
        DCr,        // Decrement r (r != A)

        // Accumulator group instructions
        ADr,        // Add contents to A, set carry
        ADM,
        ADI,

        ACr,        // Add contents + carry to A
        ACM,
        ACI,

        SUr,        // Subtract contents from A, set carry
        SUM,
        SUI,

        SBr,        // Subtract contents from A, subtract borrow, set carry
        SBM,
        SBI,

        NDr,        // Logical AND of contents with accumulator
        NDM,
        NDI,

        XRr,        // Logical XOR of contents with accumulator
        XRM,
        XRI,

        ORr,        // Logical OR of contents with accumulator
        ORM,
        ORI,

        CPr,        // Compare contents with accumulator, accumulator unaffected. Sub sets flags
        CPM,
        CPI,

        RLC,        // Rotate accumulator left
        RRC,        // Rotate accumulator right
        RAL,        // Rotate accumulator left through carry
        RAR,        // Rotate accumulator right through carry

        // PC and stack control instructions
        JMP,        
        JFc,        // Jump to B3B2 if false, else continue
        JTc,
        CAL,       
        CFc,        // Call subroutine at B3B2 if false, move up in stack, else continue
        CTc,
        RET,    
        RFc,        // Return down a level of the stack if false, else continue
        RTc,
        RST,

        // I/O instructions
        INP,        // Read contents of input port into accumulator
        OUT,        // Write accumulator into output port, RRMMM, RR != 0

        // Machine
        HLT         // Enter stopped state until interrupted
    }

`endif 