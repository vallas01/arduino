// Open serial monitor (Ctrl-Shift-M)
// the I2C address will appear
// insert that address into LiquidCrystal_I2C function (other Sketch) 


#include <Wire.h>

void setup() {
  Serial.begin (9600);
  while (!Serial) 
    {
    }
  Serial.println ();
  Serial.println ("Search I2C Address ...");
  byte count = 0;
  
  Wire.begin();
  for (byte i = 8; i <120; i++)
  {
    Wire.beginTransmission (i);
    if (Wire.endTransmission () == 0)
      {
      Serial.println ("get it");
      Serial.print ("Address is: ");
      Serial.print ("0x");
      Serial.println (i, HEX);
      count++;
      delay (1);  
      } 
  } 
  Serial.println ("Done.");
  Serial.print ("Found ");
  Serial.print (count, DEC);
  Serial.println (" Device.");
} 
void loop() {}
