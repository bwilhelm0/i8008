#!/bin/sh

# Delete the old build folder
rm -r build

# Make a build folder
mkdir build

# Synthesis (can add more SV files, space-separated, if desired)
yosys -p 'read_verilog -sv debugbus.sv 8008_core.sv; synth_ice40 -json build/synthesis.json -top top'

# Place-and-route
nextpnr-ice40 --hx8k --json build/synthesis.json --asc build/pnr.asc --package cb132 --pcf constraints.pcf --freq 32

# Compress the bitstream
icepack build/pnr.asc build/bitstream.bit

# Load the bitstream
iceprog build/bitstream.bit
