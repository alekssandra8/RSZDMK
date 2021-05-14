/*
 * fibonacci.c
 *
 *  Created on: 14 May 2021
 *      Author: Aleksandra
 */

#include <stdlib.h>
#include "fibonacci.h"

int32_t FibonacciIter(int8_t number)
{
	int8_t a = 0, b = 1;
	int8_t res;
	int8_t n, i;

	n = number;

	for(i = 1; i <= n; i++)
	{
		res = a + b;
		a = b;
		b = res;
	}
	return res;
}

int32_t FibonacciRecursive(int8_t number)
{
	if(number == 0 || number == 1)
		return 1;
	else
		return (FibonacciRecursive(number - 1) + FibonacciRecursive(number - 2));
}
