/*Hardware Livre USP
* por Bruno Rafael Arico
* hardware necessario: Arduino com atmega328,utiliza apenas o led BUILT_IN
*/
#define LED 13

int value;
int limiar = 500;

void setup() {
  Serial.begin(9600);
  pinMode(LED, OUTPUT);
}

void loop() {
  value = analogRead(A0);
  Serial.println(value);
  
  if(value > 500){
    digitalWrite(LED, HIGH);
  }
  
  else {
    digitalWrite(LED, LOW);
  }
  delay(500);
}
