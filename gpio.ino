void setup() {
DDRB=DDRB|(1<<5);
}

void loop() {
  PORTB=PORTB^(1<<5);
_delay_ms(500);
}

