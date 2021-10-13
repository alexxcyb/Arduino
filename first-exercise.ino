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
