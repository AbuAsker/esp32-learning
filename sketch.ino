const int GLed = 2;
const int YLed = 4;
const int RLed = 5;

enum TrafficState {Green, Yellow, Red};
TrafficState Current_State = Green;
unsigned long TimeEll = 0;

void setup() {
pinMode(GLed, OUTPUT);
pinMode(YLed, OUTPUT);
pinMode(RLed, OUTPUT);


digitalWrite(GLed, HIGH);
TimeEll = millis();
}

void loop() {
switch(Current_State){

case Green:
if (millis() - TimeEll >= 5000) {
digitalWrite(GLed, LOW);
digitalWrite(YLed, HIGH);

Current_State = Yellow;
TimeEll = millis();
}
break;


case Yellow:
if (millis() -TimeEll >= 2000) {
digitalWrite(YLed, LOW);
digitalWrite(RLed, HIGH);

Current_State = Red;
TimeEll = millis();
}
break;

case Red:
if (millis() -TimeEll >= 5000) {
digitalWrite(RLed, LOW);
digitalWrite(GLed, HIGH);

Current_State = Green;
TimeEll = millis();
}
break;
}}
