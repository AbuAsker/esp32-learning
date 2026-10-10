const int LED_PIN = 2;
const int BUTTON_PIN = 4;

void setup() {
pinMode(LED_PIN , OUTPUT);
pinMode(BUTTON_PIN, INPUT_PULLUP);
}

void loop() {
int state = digitalRead(BUTTON_PIN);

if (state == LOW) {
  digitalWrite(LED_PIN, HIGH);
} else {
  digitalWrite(LED_PIN, LOW);
}
}
