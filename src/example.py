# Install dependencies PySerial
#   - pip3 install pyserial

# NOTE: Change the serial port here to match the one on your computer
# on macOS it looks something like "/dev/tty.usbserial-FT4MG9OV1"
# on Windows it looks something like "COM2"
# on Linux it looks like "/dev/ttyACM0"
SERIAL_PORT = "/dev/tty.usbserial-FT4MG9OV1"

from interface import Chip
import serial.tools.list_ports
import time

print("Listing all available serial ports:")
ports = serial.tools.list_ports.comports()
for port, desc, hwid in sorted(ports):
    print("{}: {} [{}]".format(port, desc, hwid))

chip = Chip(SERIAL_PORT)


print("Resetting...")
chip.set_reset(1)
chip.step_clock()
chip.set_reset(0)

for _ in range(10):
    print("{:012b}".format(chip.get_all_outputs()))
    chip.step_clock()
    time.sleep(0.5)


print("Resetting...")
chip.set_reset(1)
chip.step_clock()
chip.set_reset(0)

for _ in range(10):
    print("{:012b}".format(chip.get_all_outputs()))
    chip.step_clock()
    time.sleep(0.5)


print("Set inputs to 0b0000_1001_0110. Expect low bits of output to be 0b1111")
chip.set_all_inputs(0b000010010110)
print("{:012b}".format(chip.get_all_outputs()))

print("Set inputs to 0b0000_0011_0011. Expect low bits of output to be 0b110")
chip.set_all_inputs(0b000000110011)
print("{:012b}".format(chip.get_all_outputs()))

# Other useful commands:
# print(chip.get_output(0)) - gets the lowest bit of the chip's outputs
# chip.set_input(0, 1) - sets the lowest bit of the chip's inputs to be high
