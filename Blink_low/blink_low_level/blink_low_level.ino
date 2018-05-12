void setup() {
  DDRB |= B00100000;
  cli();
  TCCR1A = 0;// set TCCR1A para 0, modo de operação normal
  TCCR1B = 0;// set TCCR1A para 0, modo de operação normal
  TCNT1= 0;// inicia o contador do 0
  OCR1A = 15624;// seta o comparador (16*10^6) / (1*1024) - 1 
  OCR1A = 15624>>1;
  TCCR1B |= (1 << WGM12); //ctc mode
  TCCR1B |= (1 << CS10) | (1 << CS12); // Seta CS10 e CS12 bits para 1024 prescaler  
  TIMSK1 |= (1 << OCIE1A); // ativa interrupção por comparação
  sei();
}

void loop() {
  // put your main code here, to run repeatedly:
}

ISR(TIMER1_COMPA_vect) {
  PORTB ^= B00100000;
}

