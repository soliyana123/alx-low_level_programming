#include <stdio.h>
#include "main.h"

/**
 * set_bit - sets a bit at a given index to 1
 * @n: pointer to the number to change
 * @index: index of the bit to set to 1
 *
 * Return: 1 for success, -1 for failure
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int x;
	int s = 1;

	x = (sizeof(n) * 8) -  1;
	if (index > x)
		return (-1);
	*n |= (s << index);
	return (1);
}
