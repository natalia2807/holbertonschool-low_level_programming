#include "holberton.h"

/**
*_strlen - returns the length of a string
*@str: string to find length of
*
*Return: length of s
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