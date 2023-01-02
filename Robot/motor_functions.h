#ifndef MOTOR_FUNCTIONS_H
#define MOTER_FUNCTIONS_H
#include <Arduino.h>

void forwardAll(int motorPins[], int speed);
void forwardLeftSide(int motorPins[], int speed);
void forwardLeftFront(int motorPins[], int speed);
void forwardLeftRear(int motorPins[], int speed);
void forwardRightSide(int motorPins[], int speed);
void forwardRightFront(int motorPins[], int speed);
void forwardRightRear(int motorPins[], int speed);

void reverseAll(int motorPins[], int speed);
void reverseLeftSide(int motorPins[], int speed);
void reverseLeftFront(int motorPins[], int speed);
void reverseLeftRear(int motorPins[], int speed);
void reverseRightSide(int motorPins[], int speed);
void reverseRightFront(int motorPins[], int speed);
void reverseRightRear(int motorPins[], int speed);

void haltAll(int motorPins[]);
void haltLeftFront(int motorPins[]);
void haltLeftRear(int motorPins[]);
void haltRightFront(int motorPins[]);
void haltRightRear(int motorPins[]);


#endif
