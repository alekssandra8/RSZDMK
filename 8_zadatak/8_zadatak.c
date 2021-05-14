#include <stdint.h>
#include <stdlib.h>
#include <util/delay.h>
#include "../fibonacci/fibonacci.h"
#include "../usart/usart.h"

int main()
{
	usartInit(9600);
	int8_t str[64], broj, i;
	int32_t pom1, pom2;

	while(1)
	{
		sprintf(str, "Unesite poziciju broja Fib. niza:\r\n", broj);
		usartPutString(str);

		while(!usartAvailable());
		_delay_ms(100);

		broj = usartParseInt();

		//iterativno
		pom1 = FibonacciIter(broj);

		//rekurzivno
		for(i = 0; i <= broj; i++)
		{
			pom2 = FibonacciRecursive(i);
		}

		sprintf(str, "Iterativno--Na toj poziciji je broj: %d\r\n", pom1);
		usartPutString(str);

		sprintf(str, "Rekurzivno--Na toj poziciji je broj: %d\r\n", pom2);
		usartPutString(str);
	}
	return 0;
}
