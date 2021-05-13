#include <avr/io.h>
#include <avr/interrupt.h>

// pod c) Koriscenjem tajmera0, ali pomocu  nove funkcije

volatile unsigned long ms = 0;

unsigned long my_delay(unsigned long delay_length)
{
	unsigned long t0;

	t0 = ms;
	while((t0 - ms) < delay_length);

	return ms;
}

ISR(TIMER0_COMPA_vect)
{
	ms++;
}

int main()
{
	unsigned long period = 1000;
	int repetitions = 5, i;

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
