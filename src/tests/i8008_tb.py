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

T1 = 2 #0b010
T1I = 6 #0b110
T2 = 4 #0b100
WAIT = 0 # 0b000
T3 = 1 # 0b001
STOPPED = 3 # 0b011
T4 = 7 # 0b111
T5 = 5 # 0b101

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
async def ALU_random_test(dut)
    """Test for random alu ops"""
    prog = [0b10_001_001, 0b10_011_001]

    clk = Clock(dut.clk, 10, units="us")
    cocotb.start_soon(clk.start())

    # Setup the processor for testing
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
    await RisingEdge(dut.clk)

    for instr in prog:
        asdf


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