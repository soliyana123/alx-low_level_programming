#include <stdio.h>
/**
* main - Prints all possible combinations of two different digits
*
* Return: Always 0 (Succes)
*/

int main(void)
{
int digit1, digit2;
for (digit1 = 0; digit1 < 7; digit1++)
{
for (digit2 = digit1 + 1; digit2 < 8; digit2++)
{
putchar((digit1 % 10) + '0');
putchar((digit2 % 10) + '0');
if (digit1 == 6 && digit2 == 7)
continue;
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}

