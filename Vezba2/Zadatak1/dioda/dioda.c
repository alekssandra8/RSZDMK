#include <avr/io.h>
#include <util/delay.h>
// izvorni kod
int main()
{
	DDRB |= 1 << 5;
	while(1)
	{
		PORTB |= 1 << 5;
		_delay_ms(1000);

		PORTB &= ~(1 << 5);
		_delay_ms(1000);
	};
return 0;
}
