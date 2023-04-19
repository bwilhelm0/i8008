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

verbose = False

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
        op = alu_I_op | (a_uop << 3) | rrr
    else:
        if random.randint(0, 1) == 0:
            op = alu_inr_op | (rrr << 3) | random.randint(0, 1)
        else:
            op = alu_rot_op | (r_uop << 3)

    return op

def init_reg_file():
    prog = []
    for i in range(7):
        prog.append((LrI | (i << 3)))
        prog.append(rand_imm())

    return prog

def gen_rand_alu_prog(length):
    prog = []
    for _ in range(length):
        new_op = rand_alu_op()
        prog.append(new_op)
        if (new_op & 0b11_000_111) == alu_I_op or (new_op & 0b11_000_111) == 0b10_000_111:
            # Add a value to be read in M or I case
            prog.append(rand_imm())

    return prog

def gen_reg_state(last_reg_state, prog, ind):
    if ind == 0: return last_reg_state

    instr = prog[ind - 1] #This is wrong because of 3 byte instructions
    if instr == HLT1 or instr == HLT0 or instr == HLT0_1:
        return last_reg_state
    

    op_class = (instr & 0b11_000_000) >> 6
    D5_3 = (instr & 0b00_111_000) >> 3
    D2_0 = (instr & 0b00_000_111)


    reg_state = last_reg_state
    if op_class == 0b00:
        if D2_0 == 0b110 and D5_3 != 0b111:
            #LrI
            reg_state[D5_3] = prog[ind-1]
        elif D2_0 == 0b110 and D5_3 == 0b111:
            #LMI
            return reg_state
        elif D2_0 == 0b000:
            #INr
            reg_state[D5_3] = reg_state[D5_3]+1
        elif D2_0 == 0b001:
            #DCr
            reg_state[D5_3] = reg_state[D5_3]-1
        elif D2_0 == 0b100:
            #ALU OP I
        elif D2_0 == 0b010: #rot ops, TODO: input flag state
            if D5_3 == RLC:
                reg_state[0] = reg_state[0] << 1
            elif D5_3 == RRC:
                reg_state[0] = reg_state[0] >> 1
            elif D5_3 == RAL:
                reg_state[0] = reg_state[0] << 1
            elif D5_3 == RAR:
                reg_state[0] = reg_state[0] >> 1
    elif op_class == 0b01:
        return last_reg_state
    elif op_class == 0b10:
        # alu ops
    else:
        # Load case
        if D5_3 == 0b111:
            #LMr
            # nothing for now
            return reg_state
        elif D2_0 == 0b111:
            #LrM
            reg_state[D5_3] = prog[ind-1] # replace with memory access
        else:
            #Lr1r2
            reg_state[D5_3] = reg_state[D2_0]


    return reg_state

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
            0b10_011_001] # A <- A - B - (Carry) (SBr)

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
        if sel != 1:
            assert dut.rf._id(f"rf[{sel}]", extended=False).value == 0
        else:
            assert dut.rf._id(f"rf[{sel}]", extended=False).value == 0b00011100
    


@cocotb.test()
async def ALU_rand_test(dut):
    verbose = True
    """Test for random alu ops"""
    prog = init_reg_file()
    prog += gen_rand_alu_prog(10)

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

    last_reg_state = [0, 0, 0, 0, 0, 0, 0]
    reg_state = [0, 0, 0, 0, 0, 0, 0]
    ind = 0
    last_instr = 0
    while ind <= len(prog):
        if dut.state.value == T1:
            ind += 1
            if verbose:
                print("\nRegDump:")
                for sel in range(7):
                    print("\tREG_{reg} = {val}".format(reg=sel, val=dut.rf._id(f"rf[{sel}]", extended=False).value))
                    reg_state[sel] = dut.rf._id(f"rf[{sel}]", extended=False).value
                print("PC_L = {D_out}".format(D_out=dut.Stack.PC_out.value))
            await RisingEdge(dut.clk)
        elif dut.state.value == T2:
            AddrType = dut.D_out.value>>6
            if verbose: print("PC_H = {PC_H}, TYPE = {AddrType}".format(PC_H=dut.D_out.value, AddrType=AddrType))
            dut.READY.value = 1
            dut.D_in.value = prog[ind-1]
            if AddrType == PCI:
                if (0b11_000_000 & last_instr == alu_r_M_op) and (last_instr & 0b00_000_111 != 0b00_000_111):
                    actual_state = gen_reg_state(last_reg_state, prog, ind)
                    assert actual_state == reg_state
                last_reg_state = reg_state
                last_instr = prog[ind-1]
            await RisingEdge(dut.clk)
        elif dut.state.value == WAIT:
            await RisingEdge(dut.clk)
        elif dut.state.value == T3:
            if verbose: 
                print("Instr: %b", dut.instr.value)
                print("D_in: %b", dut.D_in.value)

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

    # for sel in range(7):
    #     assert dut.rf._id(f"rf[{sel}]", extended=False).value == 0
    

# @cocotb.test()
# async def adder_randomised_test(dut):
#     """Test for adding 2 random numbers multiple times"""

#     for i in range(10):

#         A = random.randint(0, 15)
#         B = random.randint(0, 15)

#         dut.A.value = A
#         dut.B.value = B

#         await Timer(2, units="ns")

#         assert dut.X.value == adder_model(
#             A, B
#         ), "Randomised test failed with: {A} + {B} = {X}".format(
#             A=dut.A.value, B=dut.B.value, X=dut.X.value
#         )


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