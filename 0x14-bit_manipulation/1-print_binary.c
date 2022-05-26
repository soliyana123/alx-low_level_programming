#include <stdio.h>
#include "main.h"
/**
 * _print_binary_ - convert an integer to binary but not zero
 * @n: integer
 *
 * Return: nothing
 */

void _print_binary_(unsigned long int n)
{
	if (n)
	{
		_print_binary_(n >> 1);
		_putchar((n & 1) + '0');
	}
}

/**
 * print_binary - prints the binary equivalent of a decimal number
 * @n: number to print in binary
 */

void print_binary(unsigned long int n)
{
	if (n)
		_print_binary_(n);
	else
		_putchar('0');
}
