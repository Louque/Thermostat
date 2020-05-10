#include <Arduino.h>

void setup() {
  // put your setup code here, to run once:
  pinMode(PA8, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(PA8, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(200);                       // wait for a second
  digitalWrite(PA8, LOW);    // turn the LED off by making the voltage LOW
  delay(200); 
}