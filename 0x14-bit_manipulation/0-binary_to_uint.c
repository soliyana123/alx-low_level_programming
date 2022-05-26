#include <stdio.h>
#include "main.h"

/**
 * binary_to_uint - converts a binary number to unsigned int
 * @b: string containing the binary number
 *
 * Return: the converted number
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int dec = 0;

	while (b && *b)
	{
		if (*b == '0' || *b == '1')
			dec = ((dec << 1) | (*b++ - '0'));
		else
			return (0);
	}

	return (dec);
}
