#include "holberton.h"
/**
 * more_numbers -  function that prints 10 times the numbers, from 0 to 14.
 *
 * Return: nothing.
 */
void more_numbers(void)
{
int n1, n2;
n1 = 0;
while (n1 < 10)
{
n2 = 0;
while (n2 <= 14)
{
int n3 = 0;
if (n2 <= 9)
{
n3 = n2;
}
else
{
n3 = n2 % 10;
putchar((n2 / 10) + '0');
}
putchar(n3 + '0');
n2++;
}
putchar('\n');
n1++;
}
}
