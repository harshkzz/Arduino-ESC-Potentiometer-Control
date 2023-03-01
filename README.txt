# Arduino-ESC-Potentiometer-Control
ESC Control with Arduino UNO and Potentiometer

This project allows you to control an electronic speed controller (ESC) 
which is usually used to control the speed of brushless motors with a potentiometer

Features
* Control the speed of the motor by turning the potentiometer.

Parts 
* Arduino UNO (could be any arduino board ie, mega, nano etc. Make sure to select the right board in the arduino IDE, connection are the same for all boards )
* Brushless ESC
* Potentiometer

Prerequisite (Software)
* Arduino IDE

Step 1- Connecting ESC to Arduino
ESC usually has 5 input wires. Two of those (thick black and red wire) are used to power the ESC. 
The other three thin wires are for signal input. Note that Some ESCs only have two wires for input (ie, White and black)
this type of ESCs don’t have an internal BEC(Basically a voltage regulator which outputs 5v) so you would need to power up your Arduino via external power source.
If your ESC has 3 wires they may be sometimes of different colors. See below to know which is which.
White/Yellow - Signal
Red/Red - 5v
Black/Brown - GND
1. Connect Signal wire to pin 8 on the arduino.
2. Connect the GND wire to the GND of the arduino.
3. Connect 5v to the ‘VIN’ pin on the arduino.

Step 2- Connecting Potentiometer
1. Connect the rightmost pin to 5v
2. Connect the middle pin to A0
3. Connect the leftmost pin to GND

Please refer to the circuit diagram for more details

******IMPORTANT******
Remove any attachment that you may have on your motor to avoid injury!!!!

Step 3- Coding
Now simply upload the given code to the arduino board.
Connect the power supply to the esc and rotate the potentiometer to change the speed of the motor.

Video Instruction
Refer to this video for full tutorial:-
https://youtu.be/6sbP3G3W9l4
