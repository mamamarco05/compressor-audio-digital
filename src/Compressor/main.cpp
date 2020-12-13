#include <Arduino.h>
#include <Wire.h>
#include <Adafruit_MPU6050.h>
#include <Adafruit_Sensor.h>

void setup() {
  Serial.begin(9600);
  pinMode (2, OUTPUT);
}

void loop() {
  digitalWrite(2, HIGH);
  Serial.println("Hello World!\n");
  delay(1000);
  digitalWrite(2, LOW);
  Serial.println("Hello World!\n");
  delay(1000);
}