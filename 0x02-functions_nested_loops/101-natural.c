#include <stdio.h>

/**
* main - lists all the natural numbers below 1024 (excluded).
*
* Return: 0 Value
*/

int main(void)
{
int y, x = 1024;

for (x = 0; x < 1024; x++)
{ 
if (x % 3 == 0 || x % 5 == 0)
 y += x;
}
printf("%d\n", y);
return (0);
}
