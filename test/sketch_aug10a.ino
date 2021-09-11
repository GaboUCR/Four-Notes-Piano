void setup() {
  pinMode(8,OUTPUT);
  Serial.begin(9600);

}


void loop() {
  tone(8, 262);
  delay(5000);
  tone(8, 1000);
  delay(5000);
  tone(8, 349);
  delay(5000);

}
