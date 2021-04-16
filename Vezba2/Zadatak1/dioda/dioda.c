#include <avr/io.h>
#include <util/delay.h>

// pod a) Treperenje diode frekvencijom 2Hz, kosriscenjem _delay_ms()
int main()
{
	DDRB |= 1 << 5;
	while(1)
	{
		PORTB |= 1 << 5;
		_delay_ms(500);

		PORTB &= ~(1 << 5);
		_delay_ms(500);
	};
return 0;
}
