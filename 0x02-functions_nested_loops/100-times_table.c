#include "main.h"


/**
 * main - check the code.
 *
 * Return: Always 0.
 */
void print_times_table(int n)
{
	int i, k, res;
	if (!(n > 15 || n < 0))
	{
		for (i = 0; i <= n; i++)
		{
			for (k = 0; k <= n; k++)
			{
				res = (i * k);
				if (k ! = 0)
				{
					_putchar(',');
					_putchar(' ');
				}
				if (res < 10 && k ! = 0)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar((res % 10) + '0');
				}
				else if (res >= 10 && res < 100)
				{
					_putchar(' ');
					_putchar((res / 10) + '0');
					_putchar((res % 10) + '0');
				}
				 else if (res >= 100 & j != 0)
						 {
						 _putchar((res / 100) + '0');
                                        _putchar((res / 10) % 10 + '0');
                                        _putchar((res % 10) + '0');
						 }
				else
					_putchar((res % 10) + '0');
			}
			_putchar('\n');
		}
	}
}

