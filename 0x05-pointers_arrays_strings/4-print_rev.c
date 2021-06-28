#include "holberton.h"

/**
*_rev - print a string
*@s: string to find length of
*
*Return: void
*/
void print_rev(char *s)
{
int a = 0;
while (*(s + a))

_putchar(*(s + a));
a++;
while (a >= 0)
	{
		_putchar(*(s + a));
		a--;
	}
putchar ('\n');
}