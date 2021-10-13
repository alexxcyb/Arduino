/*
  Lezione 3: Led Semaphore on Breadboard
  This semaphore it is composed of 3 different LED (i.e., Green, 
  Red and Yellow)
  created 9 Feb 2019
  by Andrea Primavera
*/

int pinLedGreen = 4;
int pinLedYellow = 5;
int pinLedRed = 6;

void setup() {
  pinMode(pinLedGreen, OUTPUT);
  pinMode(pinLedYellow, OUTPUT);
  pinMode(pinLedRed, OUTPUT);
}

void loop() {
  int greenTime  = 5000;
  int yellowTime = 1000;
  int redTime    = 5000;
  
  digitalWrite(pinLedGreen, HIGH);   
  delay(greenTime);               
  digitalWrite(pinLedGreen, LOW);     
  digitalWrite(pinLedYellow, HIGH);     
  delay(yellowTime);
  digitalWrite(pinLedYellow, LOW);     
  digitalWrite(pinLedRed, HIGH);     
  delay(redTime);
  digitalWrite(pinLedRed, LOW);     
}
