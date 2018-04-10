#define V_ref 5.0 //ajustar melhor, para o valor medido entre 5V e GND
void setup() {
  Serial.begin(9600);
}

void loop() {
  int value = analogRead(A0);
  float voltage = value*V_ref/(pow(2, 10)-1); 
  Serial.println(voltage);
}
