

`ifndef 8008_ISA_VH_
`define 8008_ISA_VH_

/*----------------------------------------------------------------------------
 * Opcodes (All Instruction Types)
 *----------------------------------------------------------------------------*/

    // 
    typedef enum logic [1:0] {
        LOAD_IND_MEM = 2'b11,
        ALU_IND_MEM = 2'b10,
        IO_CTRL = 2'b01,
        IMM_MISC = 2'b00
    } optype_t;

    typedef enum logic [2:0] {
        
    }

`endif 