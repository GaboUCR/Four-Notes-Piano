int notes[] = {262, 294, 330, 349};

void setup() {
  pinMode(8,OUTPUT);
  Serial.begin(9600);

}

void loop() {
  int note = analogRead(A0);
  Serial.println(note);
  //Serial.println(analogRead(A1));

  if(note == 1023)
  {
    tone(8,notes[0]);
  }
  else if(note >= 990 && note <= 1010)
  {
    tone(8, notes[1]);
  }
  else if(note >= 505 && note <= 515)
  {
  tone(8, notes[2]);
  }
  else if(note >= 5 && note <= 10)
  {
  tone(8, notes[3]);
  }
  else
  {
    noTone(8);
  }
  }
