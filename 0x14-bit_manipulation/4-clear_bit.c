#include <stdio.h>
#include "main.h"

/**
 * clear_bit - sets the value of a int
 * @n: integer
 * @index: index starting 0
 * Description: prints the binary representation of a number.
 * Return: -1 or 1
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;
	unsigned int s_index;

	s_index = 0;
	mask = 1;
	while (mask < 2147483648)
	{
		if (s_index == index)
		{
			*n = *n & ~(1 << index);
			return (1);
		}
		s_index++;
		mask = mask << 1;
	}
	return (-1);
}
