void setup() {
  pinMode(2, OUTPUT); //Green
  pinMode(4, OUTPUT); //Yellow
  pinMode(5, OUTPUT); //Red
}

void loop() {
digitalWrite(2, HIGH);
delay(1000);
digitalWrite(2, LOW);

digitalWrite(4, HIGH);
delay(1000);
digitalWrite(4, LOW);

digitalWrite(5, HIGH);
delay(1000);
digitalWrite(5, LOW);
}
