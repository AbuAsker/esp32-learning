const int Led = 4;

int brightness = 0;             
int step = 1;                   
unsigned long lastUpdate = 0;    

void setup() {
  pinMode(Led, OUTPUT);
}

void loop() {
  if (millis() - lastUpdate >= 10) {  
    lastUpdate = millis();            

    analogWrite(Led, brightness);     
    brightness = brightness + step;    

    if (brightness >= 255 || brightness <= 0) {
      step = -step;                   
  }
}
}
