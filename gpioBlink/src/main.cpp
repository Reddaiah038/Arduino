#include <Arduino.h>


void setup() {
  //setting port b as output
  DDRB |= (1<<DDB5);
  //setting pin b5 to low
  PORTB &= ~(1 << PB5);
}

void blink(){
    //toggling the pin
    PINB |= (1<<PB5);
}

void delay(){
    //creating delay
    for(volatile long i=0; i<100000; i++)
}


void loop() {
  blink();
  delay();
}
