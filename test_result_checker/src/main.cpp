#include <Arduino.h>

int blue = 13;
int red = 8;
int answ = -1;


void setup()
{
  pinMode(blue, OUTPUT);
  pinMode(red, OUTPUT);
  Serial.begin(9600);
  Serial.print("Enter your exam score\n");
}

void loop()
{
  if (Serial.available()) {
  	answ = Serial.parseInt();
  }
  
  if (answ >= 50) {
    digitalWrite(blue, HIGH);
    delay(500);
    digitalWrite(blue, LOW);
    delay(500);
  }
  else if (answ >= 0 && answ < 50){
  	digitalWrite(blue, HIGH);
    digitalWrite(red, HIGH);
    delay(300);
    digitalWrite(blue, LOW);
    digitalWrite(red, LOW);
    delay(300);
  }
}