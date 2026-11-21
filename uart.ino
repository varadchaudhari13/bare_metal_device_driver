void setup()
{
  UBRR0=103;
  UCSR0B=(1<<TXEN0);
  UCSR0C=(1<<UCSZ01)|(1<<UCSZ00);
}
void loop()
{
  const char msg[]="HELLO from UART\r\n";

  for(int i=0;msg[i]!='\0';i++)
  { 
    while(!(UCSR0A & (1<<UDRE0)));
    UDR0=msg[i];
  }
  _delay_ms(1000);

}
