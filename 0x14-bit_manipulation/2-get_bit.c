#include <stdio.h>
#include "main.h"

/**
 * get_bit -  bit at a given index.
 * @n: integer
 * @index: index starting 0
 * Description: prints the binary representation of a number.
 * Return: -1 or index
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask;
	unsigned int s_index;

	mask = 1;
	s_index = 0;
	while (mask < 2147483648)
	{
		if (s_index == index)
		{
			if ((mask & n) == 0)
				return (0);
			else
				return (1);
		}
		s_index++;
		mask = mask << 1;
	}
	return (-1);
}
