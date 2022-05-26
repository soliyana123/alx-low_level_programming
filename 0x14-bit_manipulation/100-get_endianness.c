#include <stdio.h>
#include "main.h"

/**
 * get_endianness - Check the endianness
 *
 * Description:  function that checks the endianness.
 * Return: -1 or 1
 */

int get_endianness(void)
{
	char num;
	char *ptr;

	num = '1';
	ptr = &num;
	if (*ptr == 0)
		return (0);
	else
		return (1);
}
