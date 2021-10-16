# define pinLedGreen 11;
# define pinLedYellow 12;
# define pinLedRed 10;

# define pinLedGreen2 2;
# define pinLedYellow2 3;
# define pinLedRed2 4;

void setup() {
  pinMode(pinLedGreen, OUTPUT);
  pinMode(pinLedYellow, OUTPUT);
  pinMode(pinLedRed, OUTPUT);
  
  pinMode(pinLedGreen2, OUTPUT);
  pinMode(pinLedYellow2, OUTPUT);
  pinMode(pinLedRed2, OUTPUT);
}

void loop() {
  int greenTime  = 4000;
  int yellowTime = 1000;
  int redTime = 5000;
  
  int greenTime2  = 4000;
  int yellowTime3 = 1000;
  int redTime4 = 5000;
  
  digitalWrite(pinLedGreen, 1);   
  delay(greenTime);               
  digitalWrite(pinLedGreen, 0);     
  digitalWrite(pinLedYellow, 1);     
  delay(yellowTime);
  digitalWrite(pinLedYellow, 0);     
  digitalWrite(pinLedRed, 1);     
  delay(redTime);
  digitalWrite(pinLedRed, 0);
  
  digitalWrite(pinLedGreen2, 0);   
  delay(greenTime2);               
  digitalWrite(pinLedGreen2, 1);     
  digitalWrite(pinLedYellow2, 0);     
  delay(yellowTime2);
  digitalWrite(pinLedYellow2, 1);     
  digitalWrite(pinLedRed2, 0);     
  delay(redTime2);
  digitalWrite(pinLedRed2, 1);  
}
