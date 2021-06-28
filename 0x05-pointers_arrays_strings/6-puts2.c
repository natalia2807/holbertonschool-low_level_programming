#include "holberton.h"

/**
 * puts2 - prints every other character of a  string to stdout
 * @str: string to print
 *
 * Return: void
 */
void puts2(char *str)
{
int c = 0;

while (*(str + c))
{
_putchar(*(str + c));
c = c + 2;
}
_putchar('\n');
}