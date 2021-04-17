#include <avr/io.h>
#include <avr/interrupt.h>

// pod c) Koriscenje tajmera0, ali pomocu  nove funkcije

void my_delay(unsigned long ms)
{

}

unsigned long ms = 0;

ISR(TIMER0_COMPA_vect)
{
	ms++;
}

int main()
{
	DDRB |= 1 << 5;

	TCCR0A = 0x02;
	TCCR0B = 0x03;
	OCR0A = 249;
	TIMSK0 = 0x02;

	sei();

	while(1)
	{

	};
return 0;
}
