#include "holberton.h"

/**
*_puts - prints a string
*@str: string to find length of
*
*Return: void
*/
void _puts(char *str)
{
int a = 0;
while (*(str + a))
{
_putchar(*(str + a));
a++;
}
putchar ('\n');
}