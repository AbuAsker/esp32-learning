const int Red_Led = 2;
const int Yellow_Led = 5;
const int Green_Led = 4;


void setup() {
pinMode(Red_Led, OUTPUT);
pinMode(Yellow_Led, OUTPUT);
pinMode(Green_Led, OUTPUT);
}

void loop() {
    digitalWrite(Red_Led, HIGH);
    delay(5000);
    digitalWrite(Red_Led, LOW);
    digitalWrite(Green_Led, HIGH);
    delay(5000);
    digitalWrite(Green_Led, LOW);
    digitalWrite(Yellow_Led, HIGH);
    delay(2000);
    digitalWrite(Yellow_Led, LOW);
}
