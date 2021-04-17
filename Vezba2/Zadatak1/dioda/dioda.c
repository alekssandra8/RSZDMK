#include <avr/io.h>
#include <avr/interrupt.h>

unsigned long ms = 0;

ISR(TIMER0_COMPA_vect)
{
	ms++;
}
int main()
{
	unsigned long t0;

	DDRB |= 1 << 5;

	TCCR0A = 0x02;
	TCCR0B = 0x03;
	OCR0A = 249;
	TIMSK0 = 0x02;

	sei();

	while(1)
	{
		t0 = ms;
		while ((ms - t0) < 500);
		PORTB |= 1 << 5;

		t0 = ms;
		while ((ms - t0) < 500);
		PORTB &= ~(1 << 5);
	};
return 0;
}
