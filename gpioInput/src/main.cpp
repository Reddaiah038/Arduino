#include <Arduino.h>


void setup() {
  //setting port b as output
  DDRB |= (1<<DDB5);

  //setting port b as input for switch
  DDRB &= ~(1 << DDB0);

  //setting pin b5 to low
  PORTB &= ~(1 << PB5);

  //setting pin b0 to pullup
  PORTB |=(1 << PB0);

}

void blink(){
    //toggling the pin
    PINB |= (1<<PB5);
}

void delay(){
    //creating delay
    for(volatile long i=0; i<100000; i++);
}


void loop() {
  //checking for switch press and toggling led
  if (!(PINB & (1 << PB0))){
    for (int i=0; i<5; i++){
      blink();
      delay();
    }
  }
}