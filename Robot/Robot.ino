#include "motor_functions.h"
//NOTE
//ena - left front, enb - left rear, ena_r - right rear, enb_r right front

int ena = 5;
int in1 = 6;
int in2 = 7;
int enb = 11;
int in3 = 12;
int in4 = 13;
int ena_r = 10;
int in1_r = 8;
int in2_r = 9;
int enb_r = 3;
int in3_r = 2;
int in4_r = 1;

int motorPins[12] = {ena, in1, in2, enb, in3, in4, ena_r, in1_r, in2_r, enb_r, in3_r, in4_r};

void setup() {
  // put your setup code here, to run once:
pinMode(ena, OUTPUT);
pinMode(in1, OUTPUT);
pinMode(in2, OUTPUT);  
pinMode(enb, OUTPUT);
pinMode(in3, OUTPUT);
pinMode(in4, OUTPUT);
pinMode(ena_r, OUTPUT);
pinMode(in1_r, OUTPUT);
pinMode(in2_r, OUTPUT);
pinMode(enb_r, OUTPUT);
pinMode(in3_r, OUTPUT);
pinMode(in4_r, OUTPUT);


  
haltAll(motorPins);
delay(500);


forwardLeftFront(motorPins, 75);
delay(1000);
haltAll(motorPins);
delay(500);

forwardLeftRear(motorPins, 75);
delay(1000);
haltAll(motorPins);
delay(500);

forwardRightFront(motorPins, 75);
delay(1000);
haltAll(motorPins);
delay(500);

forwardRightRear(motorPins, 75);
delay(1000);
haltAll(motorPins);
delay(500);

reverseLeftFront(motorPins, 75);
delay(1000);
haltAll(motorPins);
delay(500);

reverseLeftRear(motorPins, 75);
delay(1000);
haltAll(motorPins);
delay(500);

reverseRightFront(motorPins, 75);
delay(1000);
haltAll(motorPins);
delay(500);

reverseRightRear(motorPins, 75);
delay(1000);
haltAll(motorPins);
delay(500);

forwardLeftSide(motorPins, 75);
delay(1000);
haltAll(motorPins);
delay(500);

forwardRightSide(motorPins, 75);
delay(1000);
haltAll(motorPins);
delay(500);

forwardAll(motorPins, 75);
delay(1000);
haltAll(motorPins);
delay(500);

reverseLeftSide(motorPins, 75);
delay(1000);
haltAll(motorPins);
delay(500);

reverseRightSide(motorPins, 75);
delay(1000);
haltAll(motorPins);
delay(500);

reverseAll(motorPins, 75);
delay(1000);
haltAll(motorPins);
delay(500);

}

//**** LOOP ****
void loop() {
  // put your main code here, to run repeatedly:

}
