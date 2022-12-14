// Run Scan_I2C sketch to confirm setting for LiquidCrystal_I2C()
// UNO Analog IN Pin A5 goes to SCL on Liquid Crystal Display 2004A
// UNO Analog IN Pin A4 goes to SDA on Liquid Crystal Display 2004A

#include <Wire.h>
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27, 20, 4); 

void setup()
{
  lcd.init();                  
  lcd.init();
  lcd.backlight();
  delay(1000); 
  lcd.noBacklight();
  delay(500); 
  lcd.backlight(); 
  lcd.setCursor(0,0);
  lcd.print("********************");
  lcd.setCursor(0, 1);
  lcd.print("*    I got this    *");
  lcd.setCursor(0, 2);
  lcd.print("*    to work!!!    *");
  lcd.setCursor(0,3);
  lcd.print("********************");
}

void loop()
{
}
