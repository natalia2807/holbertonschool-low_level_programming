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
a++;
a = a -1;

while (a >= 0)
	{
		_putchar(*(s + a));
		a--;
	}
putchar ('\n');
}