#include<Servo.h>
Servo ESC;                              //Using the servo library to send out pwm signal for the esc
#define esc_pin 8                       // Change your pin connected to esc accordingly here

void setup(){
  ESC.attach(esc_pin);
  ESC.writeMicroseconds(1000);
  Serial.begin(9600);
}

void loop(){
  int val;
  val = analogRead(A0);
  val = map(val, 0, 1023, 1000, 2000);   // Mapping the input value(0 to 1023) from potentiometer to 1000 to 2000 pwm signal 
                                         // Change accordingly if your motor starts spinning even when potentiometer is set at 0
  ESC.writeMicroseconds(val);
}
