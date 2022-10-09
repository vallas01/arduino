// Test Servo with potentiometer and pushbutton
// pot is connected to A0, +5V, GND with 100uF cap across voltage
// servo is connected to pin 9, +5V, GND with 100uF cap across voltage
// pushbutton is connected to pin 2 and GND (use internal pull-up resistor)

// OBSERVATION:  arduino servo is not too smooth





#include <Servo.h>

Servo myServo;

int const buttonPin = 2;
int const potPin = A0;
int potVal;
int angle;
int buttonState = 0;
// int min_Angle; (add later for edge cases)

unsigned long button_time=0;
unsigned long last_button_time=0;

void setup() {
  // put your setup code here, to run once:
  myServo.attach(9);
  pinMode(buttonPin, INPUT_PULLUP);
  Serial.begin(9600);

  
}

void loop() {
  // put your main code here, to run repeatedly:
  buttonState = digitalRead(buttonPin);
  potVal = analogRead(potPin);
//  Serial.print("potVal: ");
//  Serial.print(potVal);
  angle = map(potVal, 0, 1023, 0, 179);
//  Serial.print(", angle: ");
//  Serial.println(angle);
  myServo.write(angle);
  delay(15);


// DO THIS IF BUTTON GETS PUSHED, ACCOUNT FOR MECHANICAL BOUNCE (LOW IS LONGER THAN .25sec)
  if (buttonState == LOW) {
  button_time=millis();
    if (button_time - last_button_time >250) {
      last_button_time = button_time;

// SHOULD HANDLE EDGE CASES (angle range is from 0 to 179)      
//      min_Angle = angle-15>0 ? angle-15 : 0;  
     
      for (int i=1; i<7; i++){
        myServo.write(angle-(2*i));
        delay(100);
      }
     
      for (int i=1; i<13; i++){
        myServo.write(angle+(2*i-12));
        delay(100);
      }
      
      for (int i=1; i<7; i++){
        myServo.write(angle+(12-2*i));
        delay(100);
      }
      
    }
    
  }  
}
