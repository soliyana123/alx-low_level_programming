#include <stdio.h>
#include "main.h"

/**
 * flip_bits -  function that returns the number of bits you would need to flip
 * to get from one number to another.
 * @n: number 1;
 * @m: number 2;
 * Return: thenumber of buts needed to flip
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	m = n ^ m;
	n = 0;

	while (m)
	{
		n += m & 1;
		m >>= 1;
	}

	return (n);
}
