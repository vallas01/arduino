#include "motor_functions.h"


void forwardAll(int motorPins[], int speed) {
  digitalWrite(motorPins[1], LOW); 
  digitalWrite(motorPins[2], HIGH);
  analogWrite(motorPins[0], speed);   // 0-255 speed
  digitalWrite(motorPins[4], HIGH);
  digitalWrite(motorPins[5], LOW); 
  analogWrite(motorPins[3], speed);   // 0-255 speed
  digitalWrite(motorPins[7], HIGH); 
  digitalWrite(motorPins[8], LOW);
  analogWrite(motorPins[6], speed);   // 0-255 speed
  digitalWrite(motorPins[10], LOW); 
  digitalWrite(motorPins[11], HIGH); 
  analogWrite(motorPins[9], speed);   // 0-255 speed
}

void forwardLeftSide(int motorPins[], int speed) {
  digitalWrite(motorPins[1], LOW); 
  digitalWrite(motorPins[2], HIGH);
  analogWrite(motorPins[0], speed);   // 0-255 speed
  digitalWrite(motorPins[4], HIGH);
  digitalWrite(motorPins[5], LOW); 
  analogWrite(motorPins[3], speed);   // 0-255 speed
}
void forwardLeftFront(int motorPins[], int speed){
  digitalWrite(motorPins[1], LOW); 
  digitalWrite(motorPins[2], HIGH);
  analogWrite(motorPins[0], speed);   // 0-255 speed
 }
void forwardLeftRear(int motorPins[], int speed){
  digitalWrite(motorPins[4], HIGH);
  digitalWrite(motorPins[5], LOW); 
  analogWrite(motorPins[3], speed);   // 0-255 speed
}

void forwardRightSide(int motorPins[], int speed) {
  digitalWrite(motorPins[7], HIGH); 
  digitalWrite(motorPins[8], LOW);
  analogWrite(motorPins[6], speed);   // 0-255 speed
  digitalWrite(motorPins[10], LOW); 
  digitalWrite(motorPins[11], HIGH); 
  analogWrite(motorPins[9], speed);   // 0-255 speed
}
void forwardRightFront(int motorPins[], int speed){
  digitalWrite(motorPins[7], HIGH); 
  digitalWrite(motorPins[8], LOW);
  analogWrite(motorPins[6], speed);   // 0-255 speed
}
void forwardRightRear(int motorPins[], int speed){
  digitalWrite(motorPins[10], LOW); 
  digitalWrite(motorPins[11], HIGH); 
  analogWrite(motorPins[9], speed);   // 0-255 speed
}


void reverseAll(int motorPins[], int speed){
  digitalWrite(motorPins[1], HIGH); 
  digitalWrite(motorPins[2], LOW);
  analogWrite(motorPins[0], speed);   // 0-255 speed
  digitalWrite(motorPins[4], LOW);
  digitalWrite(motorPins[5], HIGH); 
  analogWrite(motorPins[3], speed);   // 0-255 speed
  digitalWrite(motorPins[7],LOW); 
  digitalWrite(motorPins[8], HIGH); 
  analogWrite(motorPins[6], speed);   // 0-255 speed
  digitalWrite(motorPins[10], HIGH); 
  digitalWrite(motorPins[11], LOW); 
  analogWrite(motorPins[9], speed);   // 0-255 speed
}

void reverseLeftSide(int motorPins[], int speed){
  digitalWrite(motorPins[1], HIGH); 
  digitalWrite(motorPins[2], LOW);
  analogWrite(motorPins[0], speed);   // 0-255 speed
  digitalWrite(motorPins[4], LOW);
  digitalWrite(motorPins[5], HIGH); 
  analogWrite(motorPins[3], speed);   // 0-255 speed
}
void reverseLeftFront(int motorPins[], int speed){
  digitalWrite(motorPins[1], HIGH); 
  digitalWrite(motorPins[2], LOW);
  analogWrite(motorPins[0], speed);   // 0-255 speed
}
void reverseLeftRear(int motorPins[], int speed){
  digitalWrite(motorPins[4], LOW);
  digitalWrite(motorPins[5], HIGH); 
  analogWrite(motorPins[3], speed);   // 0-255 speed
}

void reverseRightSide(int motorPins[], int speed){
  digitalWrite(motorPins[7],LOW); 
  digitalWrite(motorPins[8], HIGH); 
  analogWrite(motorPins[6], speed);   // 0-255 speed
  digitalWrite(motorPins[10], HIGH); 
  digitalWrite(motorPins[11], LOW); 
  analogWrite(motorPins[9], speed);   // 0-255 speed
}
void reverseRightFront(int motorPins[], int speed){
  digitalWrite(motorPins[7],LOW); 
  digitalWrite(motorPins[8], HIGH); 
  analogWrite(motorPins[6], speed);   // 0-255 speed
}
void reverseRightRear(int motorPins[], int speed){
  digitalWrite(motorPins[10], HIGH); 
  digitalWrite(motorPins[11], LOW); 
  analogWrite(motorPins[9], speed);   // 0-255 speed
}

void haltAll(int motorPins[]){
  digitalWrite(motorPins[1],  LOW); 
  digitalWrite(motorPins[2],  LOW);
  digitalWrite(motorPins[4],  LOW);
  digitalWrite(motorPins[5],  LOW);
  digitalWrite(motorPins[7],  LOW);
  digitalWrite(motorPins[8],  LOW);
  digitalWrite(motorPins[10],  LOW);
  digitalWrite(motorPins[11],  LOW);
}
void haltLeftFront(int motorPins[]){
  digitalWrite(motorPins[1],  LOW); 
  digitalWrite(motorPins[2],  LOW);
}
void haltLeftRear(int motorPins[]){
  digitalWrite(motorPins[4],  LOW);
  digitalWrite(motorPins[5],  LOW);
}
void haltRightFront(int motorPins[]){
  digitalWrite(motorPins[7], LOW);
  digitalWrite(motorPins[8],  LOW);
}
void haltRightRear(int motorPins[]){
  digitalWrite(motorPins[10],  LOW);
  digitalWrite(motorPins[11],  LOW);
}
