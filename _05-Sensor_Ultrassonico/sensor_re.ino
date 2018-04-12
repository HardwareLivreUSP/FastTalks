#include <Ultrasonic.h>

#define TRIGGER_PIN  12
#define ECHO_PIN     13
#define spk 7

Ultrasonic ultrasonic(TRIGGER_PIN, ECHO_PIN);

void setup() {
  Serial.begin(9600);
}

void loop(){
  float cmMsec;
  long microsec = ultrasonic.timing();
  
  cmMsec = ultrasonic.convert(microsec, Ultrasonic::CM);
  Serial.print(", CM: ");
  Serial.print(cmMsec);
  if(dmMsec < 500)
    tone (spk, 440, cmMsec*10.0/100.0);
  delay(1000);
}
