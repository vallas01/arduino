// This program will test each wheel and define wheel functions

// DEFINE PINS
int ena = 5; //left front
int in1 = 6;
int in2 = 7;
int enb = 11; //left rear
int in3 = 12;
int in4 = 13;
int ena_r = 3; // right front
int in1_r = 1;
int in2_r = 2;
int enb_r = 10; // right rear
int in3_r = 9;
int in4_r = 8;

// DEFINE FUNCTIONS
void forwardAll(int speed) {
  forwardLeftFront(speed);
  forwardLeftRear(speed);
  forwardRightFront(speed);
  forwardRightRear(speed);
}

void forwardLeftSide(int speed) {
  forwardLeftFront(speed);
  forwardLeftRear(speed);
}
void forwardLeftFront(int speed){
  digitalWrite(in1,LOW); 
  digitalWrite(in2,HIGH);
  analogWrite(ena, speed);   // 0-255 speed
 }
void forwardLeftRear(int speed){
  digitalWrite(in3,HIGH);
  digitalWrite(in4,LOW); 
  analogWrite(enb, speed);   // 0-255 speed
}

void forwardRightSide(int speed) {
  forwardRightFront(speed);
  forwardRightRear(speed);
}
void forwardRightFront(int speed){
  digitalWrite(in1_r,HIGH); 
  digitalWrite(in2_r,LOW);
  analogWrite(ena_r, speed);   // 0-255 speed
}
void forwardRightRear(int speed){
  digitalWrite(in3_r,LOW); 
  digitalWrite(in4_r,HIGH); 
  analogWrite(enb_r, speed);   // 0-255 speed
}


void reverseAll(int speed){
  reverseLeftFront(speed);
  reverseLeftRear(speed);
  reverseRightFront(speed);
  reverseRightRear(speed);
}

void reverseLeftSide(int speed){
  reverseLeftFront(speed);
  reverseLeftRear(speed);
}
void reverseLeftFront(int speed){
  digitalWrite(in1,HIGH); 
  digitalWrite(in2,LOW);
  analogWrite(ena, speed);   // 0-255 speed
}
void reverseLeftRear(int speed){
  digitalWrite(in3,LOW);
  digitalWrite(in4,HIGH); 
  analogWrite(enb, speed);   // 0-255 speed
}

void reverseRightSide(int speed){
  reverseRightFront(speed);
  reverseRightRear(speed);
}
void reverseRightFront(int speed){
  digitalWrite(in1_r,LOW); 
  digitalWrite(in2_r,HIGH); 
  analogWrite(ena_r, speed);   // 0-255 speed
}
void reverseRightRear(int speed){
  digitalWrite(in3_r,HIGH); 
  digitalWrite(in4_r,LOW); 
  analogWrite(enb_r, speed);   // 0-255 speed
}

void haltAll(){
  haltLeftFront();
  haltLeftRear();
  haltRightFront();
  haltRightRear();
}
void haltLeftFront(){
  digitalWrite(in1, LOW); 
  digitalWrite(in2, LOW);
}
void haltLeftRear(){
  digitalWrite(in3, LOW);
  digitalWrite(in4, LOW);
}
void haltRightFront(){
  digitalWrite(in1_r, LOW);
  digitalWrite(in2_r, LOW);
}
void haltRightRear(){
  digitalWrite(in3_r, LOW);
  digitalWrite(in4_r, LOW);
}

//**** SETUP ****
void setup() {
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

// TEST EACH FUNCTION
haltAll();
delay(500);

forwardLeftFront(75);
delay(1000);
haltAll();
delay(500);

forwardLeftRear(75);
delay(1000);
haltAll();
delay(500);

forwardRightFront(75);
delay(1000);
haltAll();
delay(500);

forwardRightRear(75);
delay(1000);
haltAll();
delay(500);

reverseLeftFront(75);
delay(1000);
haltAll();
delay(500);

reverseLeftRear(75);
delay(1000);
haltAll();
delay(500);

reverseRightFront(75);
delay(1000);
haltAll();
delay(500);

reverseRightRear(75);
delay(1000);
haltAll();
delay(500);

forwardLeftSide(75);
delay(1000);
haltAll();
delay(500);

forwardRightSide(75);
delay(1000);
haltAll();
delay(500);

forwardAll(75);
delay(1000);
haltAll();
delay(500);

reverseLeftSide(75);
delay(1000);
haltAll();
delay(500);

reverseRightSide(75);
delay(1000);
haltAll();
delay(500);

reverseAll(75);
delay(1000);
haltAll();
delay(500);

}

//**** LOOP ****
void loop() {
  // put your main code here, to run repeatedly:

}
