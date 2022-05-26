#include <stdio.h>
#include "main.h"

/**
 * print_binary - prints the binary equivalent of a decimal number
 * @n: number to print in binary
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
 * print_binary - prints the binary
 * @n: integer
 * Description: prints the binary representation of a number.
 * Return: 1
 */
void print_binary(unsigned long int n)
{
	if (n)
		_print_binary_(n);
	else
		_putchar('0');
}
