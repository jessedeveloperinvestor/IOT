#pip install pyserial
import serial
from serial.tools import list_ports
for port in list_ports.comports():
	print('Device: '+port.description+' - port: '+port.device)
	
connection=serial.Serial('COM3',115200)
action=input("Type in:\n'L' to turn on or\n'D' to turn off: ").upper()
while action=='L' or action=='D':
	if action=='L':
		connection.write(b'1')
	else:
		connection.write(b'0')
	action=input("Type in:\n'L' to turn on or\n'D' to turn off: ").upper()
connection.close()
print('Connection ended')
