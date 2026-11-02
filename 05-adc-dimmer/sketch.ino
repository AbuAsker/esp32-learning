const int Led = 5;
const int potentio_in = 34;

void setup() {
pinMode(Led, OUTPUT);
}

void loop() {
int potentio_read = analogRead(potentio_in);

int brightness = map(potentio_read, 0, 4095, 0, 255);
analogWrite(Led, brightness);
}
const int Led = 5;
const int potentio_in = 34;

void setup() {
pinMode(Led, OUTPUT);
}

void loop() {
int potentio_read = analogRead(potentio_in);

int brightness = map(potentio_read, 0, 4095, 0, 255);
analogWrite(Led, brightness);
}
