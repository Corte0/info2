#include <avr/io.h>
#include <util/delay.h>
#define F_CPU 16000000000

int main(){
  DDRB = (1<<DDB5);
  while (1){
    PORTB ^= (1<<PORTB5);
    _delay_ms(10000);
  }
}
