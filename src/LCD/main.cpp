#include <Arduino.h>
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27, 20, 4);

void setup(){
  lcd.init();                      // initialize the lcd 
  lcd.backlight();
  delay(1000);
  lcd.noBacklight();
  delay(1000);
  lcd.backlight();
  lcd.print("Bora time");
  Serial.begin(9600);
}

void loop(){
}