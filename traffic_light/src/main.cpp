#include <Arduino.h>

int red = 13;
int yellow = 12;
int green = 8;
int pedestrian = 7;
int buzzer = 4;
unsigned long prevTime = 0;

void setup()
{
  pinMode(red, OUTPUT);
  pinMode(yellow, OUTPUT);
  pinMode(green, OUTPUT);
  pinMode(pedestrian, OUTPUT);
  pinMode(buzzer, OUTPUT);
}

void loop()
{
  unsigned long currTime = millis();
  
  if (currTime - prevTime >= 5000) {
  	prevTime = currTime;
  }
  
  unsigned long interval = currTime - prevTime; 
  
  if (interval >= 0 && interval < 2000) {
    digitalWrite(red, HIGH);
    digitalWrite(pedestrian, HIGH);
    digitalWrite(yellow, LOW);
    digitalWrite(green, LOW);
    tone(buzzer, 200);
  }
  else if (interval >= 2000 && interval < 3000){
  	digitalWrite(yellow, HIGH);
    digitalWrite(pedestrian, LOW);
    digitalWrite(red, LOW);
    digitalWrite(green, LOW);
    noTone(buzzer);
  }
  else if (interval >= 3000 && interval < 5000){
  	digitalWrite(green, HIGH);
    digitalWrite(pedestrian, LOW);
    digitalWrite(red, LOW);
    digitalWrite(yellow, LOW);
    noTone(buzzer);
  }
}