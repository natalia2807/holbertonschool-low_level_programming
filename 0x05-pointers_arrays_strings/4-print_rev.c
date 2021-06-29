#include "holberton.h"

/**
*print_rev - print a string in stdout in reverse
*@s: variable string
*
*Return: void
*/
void print_rev(char *s)
{
int a = 0;
while (*(s + a))
a++;
a = a - 1;

while (a >= 0)
	{
		_putchar(*(s + a));
		a--;
	}
putchar ('\n');
}
