#include <Arduino.h>

int pinG = 12;
int pinR = 13;

long intervalG = 100;
long intervalR = 500;

long timeG = 0;
long timeR = 0;

bool logicG = LOW;
bool logicR = LOW;

void setup() {
  // put your setup code here, to run once:
  pinMode(pinG,OUTPUT);
  pinMode(pinR,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  long currentTime = millis();

  if (currentTime - timeG >= intervalG){
    timeG = currentTime;
    logicG = !logicG;
    digitalWrite(pinG, logicG);
  }  

  if (currentTime - timeR >= intervalR){
    timeR = currentTime;
    logicR = !logicR;
    digitalWrite(pinR, logicR);
  }
}