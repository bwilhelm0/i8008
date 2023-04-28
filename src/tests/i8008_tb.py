import os
import random
import sys
from pathlib import Path

import cocotb
from cocotb.clock import Clock
from cocotb.runner import get_runner
from cocotb.triggers import Timer
from cocotb.triggers import RisingEdge


# if cocotb.simulator.is_running():
#     from adder_model import adder_model

PCI = 0b00
PCR = 0b01
PCC = 0b10
PCW = 0b11

CYCLE1 = 0b00
CYCLE2 = 0b01
CYCLE3 = 0b10

Carry_bit = 0b1000
Zero_bit = 0b0100
Sign_bit = 0b0010
Parity_bit = 0b0001

Ca = 0b00
Ze  = 0b01
Si  = 0b10
Pa = 0b11

A = 0
B = 1
C = 2
D = 3
E = 4
Hi = 5
Lo = 6
Mem = 0b111

# State defines
T1 = 2 #0b010
T1I = 6 #0b110
T2 = 4 #0b100
WAIT = 0 # 0b000
T3 = 1 # 0b001
STOPPED = 3 # 0b011
T4 = 7 # 0b111
T5 = 5 # 0b101

op_mask = 0b11_000_111
reg_mask = 0b00_111_000

LrI = 0b00_000_110
LrM = 0b11_000_111
LMr = 0b11_111_000

# ALU uops
ADx = 0b000
ACx = 0b001
SUx = 0b010
SBx = 0b011
NDx = 0b100
XRx = 0b101
ORx = 0b110
CPx = 0b111
alu_r_M_op = 0b10_000_000
alu_I_op = 0b00_000_100

# ALU logic uops
RLC = 0b000
RRC = 0b001
RAL = 0b010
RAR = 0b011
alu_rot_op = 0b00_000_010
alu_inr_op = 0b00_000_000



HLT0 = 0b00_000_000
HLT0_1 = 0b00_000_001
HLT1 = 0b11_111_111
RST = 0b00_000_101

verbose = False

class i8008_model:
    def __init__(self):
        self.reg_file = [0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000] 
        self.pc = [0b00_0000_0000_0000, 0b00_0000_0000_0000, 0b00_0000_0000_0000, 0b00_0000_0000_0000, 0b00_0000_0000_0000, 0b00_0000_0000_0000, 0b00_0000_0000_0000, 0b00_0000_0000_0000] 
        self.stack_ind = 0
        self.flags = 0b0000
        self.prog = dict()

    def write_pc(self, pc):
        self.pc[self.stack_ind] = pc

    def push_pc(self, new_pc):
        if self.stack_ind != 7:
            self.stack_ind = self.stack_ind + 1
            self.pc[self.stack_ind] = new_pc

    def pop_pc(self):
        if self.stack_ind != 0:
            self.stack_ind = self.stack_ind - 1

    def incr_pc(self):
        self.pc[self.stack_ind] = self.pc[self.stack_ind] + 1

    def get_pc(self):
        return self.pc[self.stack_ind]

    def update_flags(self, flags):
        self.flags = flags #PSZC

    def gen_flags(self, res):
        carry = (res & 0b100000000) >> 8
        res = res & 0b11111111
        zero = 0b0000
        if res == 0b00000000:
            zero = 0b0010

        sign = (res >> 7) << 2
        parity = (res >> 4) ^ (res & 0b1111)
        parity = (parity >> 2) ^ (parity & 0b11)
        if (parity == 0 or parity == 3):
            parity = 0b1000
        else:
            parity = 0b0000

        self.flags = carry | zero | sign | parity

    def update_carry(self, carry):
        self.flags = (self.flags & 0b1110) | (carry & 0b1)

    def get_carry(self):
        return self.flags & 0b0001
    
    def get_zero(self):
        return (self.flags & 0b0010) >> 1

    def get_sign(self):
        return (self.flags & 0b0100) >> 2
    
    def get_parity(self):
        return self.flags >> 3
    
    def cond_met(self, cond):
        if cond == Ca:
            return self.get_carry()
        elif cond == Ze:
            return self.get_zero()
        elif cond == Si:
            return self.get_sign()
        elif cond == Pa:
            return self.get_parity()
        else:
            return 0

    def read_mem(self, addr):
        if addr in self.prog:
            return self.prog[addr]
        else:
            self.prog[addr] = 0b00000000
            return 0b00000000
    
    def write_mem(self, addr, data):
        self.prog[addr] = data
    
    def get_rf_addr(self):
        return self.reg_file[Hi] << 6 | self.reg_file[Lo]

    def read_rf(self, rf_ind):
        if rf_ind == 0b111:
            return self.read_mem(self.get_rf_addr())
        elif rf_ind >= 0b000 or rf_ind <= 0b110:
            return self.reg_file[rf_ind]
        else: assert 1 == 0, "BAD READ"
    
    def write_rf(self, rf_ind, data):
        if rf_ind == 0b111:
            self.write_mem(self.get_rf_addr(), data)
        else:
            self.reg_file[rf_ind] = data

    def state_check(self, dut, instr):
        assert self.pc[self.stack_ind] == dut.Stack.rs.value, "Model failed with: %r, %r != %r" % (bin(instr), bin(self.pc[self.stack_ind]), dut.Stack.rs.value)
        for i in range(7):
            assert self.reg_file[i] == dut.rf._id(f"rf[{i}]", extended=False).value, "Model failed with: %r %r, %r != %r" % (bin(instr), i, bin(self.reg_file[i]), dut.rf._id(f"rf[{i}]", extended=False).value)
        assert self.flags == dut.Unit.flags.value, "Model failed with: %r, %r != %r" % (bin(instr), bin(self.flags), dut.Unit.flags.value)

    def dump_reg(self):
        print("ModelDump:")
        print("\tPC: ", bin(self.get_pc()))
        for sel in range(7):
            print("\tREG_{reg} = {val}".format(reg=sel, val=bin(self.reg_file[sel])))
        print("\tFlags: ", bin(self.flags))
    
    def alu_op(self, D5_3, D2_0, imm, I):
        Acc = self.read_rf(0)
        Bcc = self.read_rf(D2_0)

        # Set to immediate/memory mode
        if I != 0:
            Bcc = imm
        
        if D5_3 == ADx:
            res = (Acc + Bcc)
            self.gen_flags(res)
            self.write_rf(0, res & 0b11111111)
        elif D5_3 == ACx:
            res = (Acc + Bcc + self.get_carry())
            self.gen_flags(res)
            self.write_rf(0, res & 0b11111111)
        elif D5_3 == SUx:
            res = (Acc + ((~Bcc + 1)))
            self.gen_flags(res)
            self.write_rf(0, res & 0b11111111)
        elif D5_3 == SBx:
            res = (Acc + ((~Bcc + 1)) + ((~self.get_carry() + 1)))
            self.gen_flags(res)
            self.write_rf(0, res & 0b11111111)
        elif D5_3 == NDx:
            res = (Acc & Bcc)
            self.gen_flags(res)
            self.write_rf(0, res & 0b11111111)
        elif D5_3 == XRx:
            res = (Acc ^ Bcc)
            self.gen_flags(res)
            self.write_rf(0, res & 0b11111111)
        elif D5_3 == ORx:
            res = (Acc | Bcc)
            self.gen_flags(res)
            self.write_rf(0, res & 0b11111111)
        elif D5_3 == CPx:
            res = (Acc + ((~Bcc + 1)))
            self.gen_flags(res)

    
    def gen_reg_state(self, prog, instr, mem_read):        
        imm = mem_read
        # PC_L = mem_read
        # PC_H = prog[ind + 1]

        if instr == HLT1 or instr == HLT0 or instr == HLT0_1:
            return
        

        op_class = (instr & 0b11_000_000) >> 6
        D5_3 = (instr & 0b00_111_000) >> 3
        D2_0 = (instr & 0b00_000_111)


        if op_class == 0b00:
            if D2_0 == 0b110 and D5_3 != 0b111:
                #LrI
                self.write_rf(D5_3, imm)
            elif D2_0 == 0b110 and D5_3 == 0b111:
                #LMI
                addr = self.get_rf_addr()
                self.write_mem(addr, imm)
            elif D2_0 == 0b000:
                #INr
                if (D5_3 != 0b111):
                    res = (self.read_rf(D5_3)+1) & 0b11111111
                    cbit = self.get_carry()
                    self.gen_flags(res)
                    self.update_carry(cbit)
                    self.write_rf(D5_3, res)
                else:
                    assert False, "Invalid instruction"
            elif D2_0 == 0b001:
                #DCr
                assert D5_3 != 0b000
                if (D5_3 != 0b111):
                    res = (self.read_rf(D5_3)+0b11111111) & 0b11111111
                    cbit = self.get_carry()
                    self.gen_flags(res)
                    self.update_carry(cbit)
                    self.write_rf(D5_3, res)
                else:
                    assert False, "Invalid instruction"
            elif D2_0 == 0b100:
                #ALU OP I
                self.write_mem(self.get_rf_addr(), imm)
                assert self.read_mem(self.get_rf_addr()) == imm
                self.alu_op(D5_3, D2_0, imm, 1)
            elif D2_0 == 0b010: #rot ops
                if D5_3 == RLC:
                    rf_val = self.read_rf(0)
                    write_val = ((rf_val << 1) & (0b11111110)) | (rf_val >> 7)
                    self.write_rf(0, write_val)
                    self.update_carry(rf_val >> 7)
                elif D5_3 == RRC:
                    rf_val = self.read_rf(0)
                    write_val = (rf_val >> 1) | ((rf_val << 7) & 0b10000000)
                    self.write_rf(0, write_val)
                    self.update_carry(rf_val & 0b00000001)
                elif D5_3 == RAL:
                    rf_val = self.read_rf(0)
                    write_val = ((rf_val << 1) & (0b11111110)) | (self.get_carry())
                    self.write_rf(0, write_val)
                    self.update_carry(rf_val >> 7)
                elif D5_3 == RAR:
                    rf_val = self.read_rf(0)
                    write_val = (rf_val >> 1) | ((self.get_carry() << 7) & 0b10000000)
                    self.write_rf(0, write_val)
                    self.update_carry(rf_val & 0b00000001)
            elif D2_0 == 0b111:
                #RET
                self.pop_pc()
            elif D2_0 == 0b011 and D5_3 >> 2 == 1:
                #RTc
                if self.cond_met(D5_3 & 0b011):
                    self.pop_pc()
            elif D2_0 == 0b011 and D5_3 >> 2 == 0:
                #RFc
                if not(self.cond_met(D5_3 & 0b011)):
                    self.pop_pc()
            elif D2_0 == 0b101:
                #RST
                self.push_pc(D5_3 << 3)
        elif op_class == 0b01:
            return
        #     new_pc = PC_L | (PC_H << 8)
        #     if D2_0 == 0b100:
        #         #JMP
        #         self.update_pc(new_pc)
        #     elif D2_0 == 0b000 and (D5_3 >> 2 == 1):
        #         #JTc
        #         cond = (0b011 & D5_3)
        #         if (self.cond_met(cond)):
        #             self.update_pc(new_pc)
        #     elif D2_0 == 0b000 and (D5_3 >> 2 == 0):
        #         #JFc
        #         cond = (0b011 & D5_3)
        #         if (not(self.cond_met(cond))):
        #             self.update_pc(new_pc)
        #     elif D2_0 == 0b110:
        #         #CAL
        #         self.push_pc(new_pc)
        #     elif D2_0 == 0b010 and (D5_3 >> 2 == 1):
        #         #CTc
        #         cond = (0b011 & D5_3)
        #         if (self.cond_met(cond)):
        #             self.push_pc(new_pc)
        #     elif D2_0 == 0b010 and (D5_3 >> 2 == 0):
        #         #CFc
        #         cond = (0b011 & D5_3)
        #         if (not(self.cond_met(cond))):
        #             self.push_pc(new_pc)
            # elif D2_0 & 0b001 == 1:
            #     if D5_3 >> 1 == 0:
            #         #INP
            #         self.write_rf(0, )
            #     else:
            #         #OUT
            #         return
        elif op_class == 0b10:
            # alu ops
            self.alu_op(D5_3, D2_0, imm, D2_0 == 0b111)
        else:
            # Load case
            if D5_3 == 0b111:
                #LMr
                self.write_mem(self.get_rf_addr(), self.read_rf(D2_0))
            elif D2_0 == 0b111:
                #LrM
                self.write_rf(D5_3, self.read_rf(D2_0))
                #self.reg_file[D5_3] = self.read_mem(self.get_rf_addr())
            else:
                #Lr1r2
                self.write_rf(D5_3, self.read_rf(D2_0))
                # self.reg_file[D5_3] = self.reg_file[D2_0]

        return
    
    def gen_rand_alu_prog(self, length):
        self.prog = dict()
        addr = 0b00_0000_0000_0000

        # randomly initialize reg file
        for i in range(7):
            self.prog[addr] = (LrI | (i << 3))
            addr += 1
            self.prog[addr] = rand_imm()
            addr += 1

        # populate rest of addresses with alu instruction
        for _ in range(length):
            new_op = rand_alu_op()
            self.prog[addr] = new_op
            addr += 1
            if (new_op & 0b11_000_111) == alu_I_op:
                # Add a value to be read in I case
                self.prog[addr] = rand_imm()
                addr += 1
            #elif (new_op & 0b11_000_111) == 0b10_000_111:
                # what to do in this case?

        self.prog[addr] = HLT0
            
        # for i in range(len(self.prog)):
        #     print(bin(self.prog[i]))
        #     assert self.prog[i] != 0b00_001_101, "Model failed with: {i}".format(i=i)

        return self.prog


def rand_imm():
    return random.randint(0, 0b11111111)

def rand_alu_op():
    a_uops = [ADx, ACx, SUx, SBx, NDx, XRx, ORx, CPx]
    r_uops = [RLC, RRC, RAL, RAR]

    # choose random op type and uop type
    op_type = random.randint(1,4)
    a_uop = random.choice(a_uops)
    r_uop = random.choice(r_uops)

    # Choose random register or mem
    rrr = random.randint(0, 7)
    if (op_type <= 2):
        op = alu_r_M_op | (a_uop << 3) | rrr
    elif (op_type == 3): 
        op = alu_I_op | (a_uop << 3)
        if op >> 1 == 0b0000000:
            op |= alu_r_M_op
    else:
        if random.randint(0, 1) == 0:
            if rrr == 0b111:
                rrr -= 1
            if rrr == 0b000:
                rrr += 1
            op = alu_inr_op | (rrr << 3) | random.randint(0, 1)
        else:
            op = alu_rot_op | (r_uop << 3)

    assert op != HLT0 and op != HLT1 and op != HLT0_1 and op & 0b11_000_111 != LrI and op & 0b11_000_111 != RST and op != 0b00_110_101, "{op_type}".format(op_type=op_type)
    return op

def init_reg_file():
    prog = []
    for i in range(7):
        prog.append((LrI | (i << 3)))
        prog.append(rand_imm())

    return prog



@cocotb.test()
async def i8008_basic_test(dut):
    """Test for incr"""
#    (input logic [7:0] D_in,
#    input logic INTR, READY, clk, rst,
#    output logic [7:0] D_out,
#    output logic Sync,
#    output state_t state)

    clk = Clock(dut.clk, 10, units="us")
    cocotb.start_soon(clk.start())

    await RisingEdge(dut.clk)
    dut.D_in.value = 0
    dut.INTR.value = 0
    dut.READY.value = 0
    dut.rst.value = 1
    await RisingEdge(dut.clk)
    await RisingEdge(dut.clk)

    assert dut.state.value == T1, "Basic test failed with: {state} != {actual}".format(state=T1, actual=dut.state.value)
    assert dut.D_out.value == 0b00000000, "Basic test failed with: {D_out} != {actual}".format(D_out=0b00000000, actual=dut.D_out.value)

    await RisingEdge(dut.clk)
    assert dut.state.value == T1, "Basic test failed with: {state} != {actual}".format(state=T1, actual=dut.state.value)
    dut.D_in.value = 0b00_001_000
    dut.INTR.value = 0
    dut.READY.value = 0
    dut.rst.value = 0

    await RisingEdge(dut.clk)
    assert dut.state.value == T1, "Basic test failed with: {state} != {actual}".format(state=T1, actual=dut.state.value)
    await RisingEdge(dut.clk)
    assert dut.state.value == T2, "Basic test failed with: {state} != {actual}".format(state=T2, actual=dut.state.value)
    dut.READY.value = 1

    await RisingEdge(dut.clk)
    assert dut.state.value == WAIT, "Basic test failed with: {state} != {actual}".format(state=WAIT, actual=dut.state.value)

    await RisingEdge(dut.clk)
    await RisingEdge(dut.clk)
    await RisingEdge(dut.clk)
    dut.READY.value = 0
    assert dut.state.value == T3, "Basic test failed with: {state} != {actual}".format(state=T3, actual=dut.state.value)

    await RisingEdge(dut.clk)
    assert dut.state.value == T4, "Basic test failed with: {state} != {actual}".format(state=T4, actual=dut.state.value)

    await RisingEdge(dut.clk)
    assert dut.state.value == T5, "Basic test failed with: {state} != {actual}".format(state=T5, actual=dut.state.value)
    assert dut.rf.ACC.value == 0, "Basic test failed with: 1 != {actual}".format(actual=dut.rf.ACC.value)
    assert dut.bus.value == 1, "Basic test failed with: 1 != {actual}".format(actual=dut.bus.value)
    

    await RisingEdge(dut.clk)
    assert dut.rf.ACC.value == 0, "Basic test failed with: 1 != {actual}".format(actual=dut.rf.ACC.value)

    await RisingEdge(dut.clk)
    assert dut.state.value == T2, "Basic test failed with: {state} != {actual}".format(state=T2, actual=dut.state.value)
    dut.READY.value = 1
    dut.D_in.value = 0b11_111_001

    await RisingEdge(dut.clk)
    assert dut.state.value == WAIT, "Basic test failed with: {state} != {actual}".format(state=WAIT, actual=dut.state.value)

    await RisingEdge(dut.clk)
    await RisingEdge(dut.clk)
    await RisingEdge(dut.clk)
    dut.READY.value = 0
    assert dut.state.value == T3, "Basic test failed with: {state} != {actual}".format(state=T3, actual=dut.state.value)


    cycle_count = 0
    while dut.D_out.value != 0b00000001 and (cycle_count < 20):
        cycle_count += 1
        await RisingEdge(dut.clk)

    assert dut.D_out.value == 0b00000001, "Basic test failed with: {D_out} != {actual}".format(D_out=0b00000001, actual=dut.D_out.value)


@cocotb.test()
async def ALU_add_test(dut):
    """Test for alu add"""
    prog = [0b00_001_110, # B <- Imm. (LrI)
            0b00_011_011, # Arbitrary Imm.
            0b00_001_000, # B++ (INr)
            0b10_001_001, # A <- A + B + (Carry) (ACr)
            0b10_011_001, # A <- A - B - (Carry) (SBr)
            0b10_000_111, # A <- A + Mem
            0b00_000_111] # "Mem"

    clk = Clock(dut.clk, 10, units="us")
    cocotb.start_soon(clk.start())

    # Setup the processor for testing
    await RisingEdge(dut.clk)
    dut.D_in.value = 0
    dut.INTR.value = 0
    dut.READY.value = 0
    dut.rst.value = 1
    await RisingEdge(dut.clk)
    dut.rst.value = 0
    await RisingEdge(dut.clk)

    assert dut.state.value == T1, "ALU test failed with: {state} != {actual}".format(state=T1, actual=dut.state.value)
    assert dut.D_out.value == 0b00000000, "ALU test failed with: {D_out} != {actual}".format(D_out=0b00000000, actual=dut.D_out.value)

    # await RisingEdge(dut.clk)
    # await RisingEdge(dut.clk)
    # assert dut.state.value == T1, "Basic test failed with: {state} != {actual}".format(state=T1, actual=dut.state.value)

    ind = 0
    while ind <= len(prog):
        if dut.state.value == T1:
            ind += 1
            if verbose:
                print("\nRegDump:")
                for sel in range(7):
                    print("\tREG_{reg} = {val}".format(reg=sel, val=dut.rf._id(f"rf[{sel}]", extended=False).value))
                print("PC_L = {D_out}".format(D_out=dut.Stack.PC_out.value))
            await RisingEdge(dut.clk)
        elif dut.state.value == T2:
            if verbose: print("PC_H = {PC_H}, TYPE = {AddrType}".format(PC_H=dut.D_out.value, AddrType=(dut.D_out.value>>6)))
            dut.READY.value = 1
            dut.D_in.value = prog[ind-1]
            await RisingEdge(dut.clk)
        elif dut.state.value == WAIT:
            await RisingEdge(dut.clk)
        elif dut.state.value == T3:
            if verbose: print("Instr: %b", dut.instr.value)
            dut.READY.value = 0
            await RisingEdge(dut.clk)
        elif dut.state.value == STOPPED:
            await RisingEdge(dut.clk)
        elif dut.state.value == T4:
            await RisingEdge(dut.clk)
        elif dut.state.value == T5:
            await RisingEdge(dut.clk)
        else:
            assert 1==0, "Invalid state!"

    if verbose:
        print("\nRegDump:")
        for sel in range(7):
            print("\tREG_{reg} = {val}".format(reg=sel, val=dut.rf._id(f"rf[{sel}]", extended=False).value))

    for sel in range(7):
        if sel == 0:
            assert dut.rf._id(f"rf[{sel}]", extended=False).value == 0b00000111
        elif sel == 1:
            assert dut.rf._id(f"rf[{sel}]", extended=False).value == 0b00011100
        else:
            assert dut.rf._id(f"rf[{sel}]", extended=False).value == 0
    


@cocotb.test()
async def ALU_rand_test(dut):
    """Test for random alu ops"""
    random.seed(9) # TODO: prevent program from writing to instruction memory

    model = i8008_model()

    model.gen_rand_alu_prog(300)
    verbose = True


    clk = Clock(dut.clk, 10, units="us")
    cocotb.start_soon(clk.start())

    # Setup the processor for testing
    await RisingEdge(dut.clk)
    dut.D_in.value = 0
    dut.INTR.value = 0
    dut.READY.value = 0
    dut.rst.value = 1
    await RisingEdge(dut.clk)
    dut.rst.value = 0
    await RisingEdge(dut.clk)

    assert dut.state.value == T1, "Rand ALU test failed with: {state} != {actual}".format(state=T1, actual=dut.state.value)
    assert dut.D_out.value == 0b00000000, "Rand ALU test failed with: {D_out} != {actual}".format(D_out=0b00000000, actual=dut.D_out.value)

    # used to print 8008 state
    reg_state = [0, 0, 0, 0, 0, 0, 0]
    last_instr = 0
    last_mem_read = 0

    PC_L = 0
    PC_H = 0

    # begin program simulation
    while model.get_pc() in model.prog: # and (model.prog[model.get_pc()] != HLT0 or model.prog[model.get_pc()] != HLT0_1 or model.prog[model.get_pc()] != HLT1):
        if dut.state.value == T1:
            if verbose:
                print("\nRegDump:")
                print("\tPC: ", dut.Stack.rs.value)
                print("Cycle: {cyc}, State: {state}".format(cyc=dut.Brain.cycle.value, state=dut.Brain.state.value))
                for sel in range(7):
                    print("\tREG_{reg} = {val}".format(reg=sel, val=dut.rf._id(f"rf[{sel}]", extended=False).value))
                    reg_state[sel] = dut.rf._id(f"rf[{sel}]", extended=False).value
                print("\tFlags: ", dut.Unit.flags.value)
                print("\tREG_a = ", dut.A_out.value)
                print("\tREG_b = ", dut.B_out.value)
                print("PC_L = {D_out}".format(D_out=dut.D_out.value))
            PC_L = dut.D_out.value
            await RisingEdge(dut.clk)
        elif dut.state.value == T2:
            AddrType = dut.D_out.value>>6
            if verbose: 
                print("PC_H = {PC_H}, TYPE = {AddrType}".format(PC_H=dut.D_out.value, AddrType=AddrType))
            # print("Actual type: ", bin(dut.Stack.Stack_ctrl.value >> 5))
            PC_H = (dut.D_out.value & 0b11_1111)
            PC = PC_L | (PC_H << 8)

            if AddrType == PCI:
                # update model
                # print("Last insr: ", bin(last_instr))
                # print("last mem: ", bin(last_mem_read))
                model.gen_reg_state(model.prog, last_instr, last_mem_read)
                if verbose: model.dump_reg()
                model.state_check(dut, last_instr)

                # update for new instruction
                last_instr = model.prog[model.get_pc()]                
            
            # input new program value into simulation
            dut.READY.value = 1
            # print("8008 PC: ", bin(PC))
            # print("Model pc: ", bin(model.get_pc()))
            # print("D_in ", bin(model.read_mem(PC)))
            last_mem_read = model.read_mem(PC)
            dut.D_in.value = last_mem_read

            if AddrType == PCI or (AddrType == PCR and last_instr & 0b11_000_111 != LrM and last_instr & 0b11_000_111 != 0b10_000_111 and last_instr & 0b11_111_000 != LMr):
                model.incr_pc()
            await RisingEdge(dut.clk)
        elif dut.state.value == WAIT:
            dut.READY.value = 0
            await RisingEdge(dut.clk)
        elif dut.state.value == T3:
            if verbose: 
                print("Instr: %b", dut.instr.value)
                print("D_in: %b", dut.D_in.value)

            await RisingEdge(dut.clk)
        elif dut.state.value == STOPPED:
            assert False, "Program shouldn't be here"
        elif dut.state.value == T4:
            await RisingEdge(dut.clk)
        elif dut.state.value == T5:
            await RisingEdge(dut.clk)
        else:
            assert False, "Invalid state!"

    if verbose:
        print("\nRegDump:")
        for sel in range(7):
            print("\tREG_{reg} = {val}".format(reg=sel, val=dut.rf._id(f"rf[{sel}]", extended=False).value))

    count = 0
    while dut.state.value != STOPPED:
        if count > 10:
            assert False, "Program did not reach end"
        await RisingEdge(dut.clk)

def test_i8008_runner():
    """Simulate the i8008 using the Python runner.
    This file can be run directly or via pytest discovery.
    """
    hdl_toplevel_lang = os.getenv("HDL_TOPLEVEL_LANG", "verilog")
    sim = os.getenv("SIM", "icarus")

    proj_path = Path(__file__).resolve().parent.parent
    # equivalent to setting the PYTHONPATH environment variable
    # sys.path.append(str(proj_path / "model"))

    verilog_sources = []
    vhdl_sources = []

    if hdl_toplevel_lang == "verilog":
        verilog_sources = [proj_path / "i8008_core.v"]

    # equivalent to setting the PYTHONPATH environment variable
    sys.path.append(str(proj_path / "tests"))

    runner = get_runner(sim)
    runner.build(
        verilog_sources=verilog_sources,
        vhdl_sources=vhdl_sources,
        hdl_toplevel="i8008_core",
        always=True,
    )
    runner.test(hdl_toplevel="i8008_core", test_module="i8008_tb")


if __name__ == "__main__":
    test_i8008_runner()