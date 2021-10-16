# define pinLedGreen 11;
# define pinLedYellow 12;
# define pinLedRed 10;

void setup() {
  pinMode(pinLedGreen, OUTPUT);
  pinMode(pinLedYellow, OUTPUT);
  pinMode(pinLedRed, OUTPUT);
}

void loop() {
  int greenTime  = 4000;
  int yellowTime = 1000;
  int redTime = 5000;
  
  digitalWrite(pinLedGreen, 1);   
  delay(greenTime);               
  digitalWrite(pinLedGreen, 0);     
  digitalWrite(pinLedYellow, 1);     
  delay(yellowTime);
  digitalWrite(pinLedYellow, 0);     
  digitalWrite(pinLedRed, 1);     
  delay(redTime);
  digitalWrite(pinLedRed, 0);
}
