#include "stationDefines.h"
#include <Servo.h>
Servo svo1,svo2;
/* LCD */
#include <Wire.h> 
#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27,20,4); 
void setup()
{
  pinMode(s0, OUTPUT);
  pinMode(s1, OUTPUT);
  pinMode(s2, OUTPUT);
  pinMode(s3, OUTPUT);
  pinMode(outPin, INPUT); 
  svo1.attach(9);
  svo1.write(0);
  svo2.attach(10);
  svo2.write(180);
  digitalWrite(s0,HIGH);
  digitalWrite(s1,HIGH);
  lcd.init();
  lcd.backlight();
  lcd.setCursor(5,1);
  lcd.print("Thiet ke mach");
  lcd.setCursor(0,2);
  lcd.print("Phan Loai San Pham");
  lcd.setCursor(5,3);
  lcd.print("Theo Mau");
  Serial.begin(9600);
  startTiming = millis();
}

void loop()
{
  getColor();
  servo1();
  servo2();
  if (DEBUG) printData(); 
  elapsedTime = millis()-startTiming; 
  if (elapsedTime > 1000) 
  {
 showData();
    startTiming = millis();
  }
}
