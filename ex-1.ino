# define Green 11
# define Yellow 12
# define Red 10

void setup() {
  pinMode(Green, OUTPUT);
  pinMode(Yellow, OUTPUT);
  pinMode(Red, OUTPUT);
}

void loop() {
  digitalWrite(Green, 1);
  digitalWrite(Yellow, 0);
  digitalWrite(Green, 0);
  delay(Green);
  digitalWrite(Green, 0);
  digitalWrite(Yellow, 1);
  digitalWrite(Green, 0);
  delay(Yellow);
  digitalWrite(Green, 0);
  digitalWrite(Yellow, 0);
  digitalWrite(Green, 1);
  delay(Red);
}
