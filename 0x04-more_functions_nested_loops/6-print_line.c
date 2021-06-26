#include "holberton.h"

/**
 * print_line - function that draws a straight line in the terminal.
 * @n: input value to check
 * Return: nothing.
 */
void print_line(int n)
{
int c = 0;

while (c < n)
{
if (n > 0)
{
_putchar(95);
n += 1;
}
else
_putchar('\n');
}
_putchar('\n');
}

