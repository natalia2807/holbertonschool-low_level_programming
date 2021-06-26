#include "holberton.h"

/**
 * print_triangle - function that prints a square, followed by a new line
 * @size: size of triangle
 * Return: nothing
 */

void print_triangle(int size)
{
int b, cua, extr;

if (size > 0)
{
for (b = 0; b < size; b++)
{
for (cua = 0; cua < size; cua++)
{
extr = (size - b) - 1;
if (cua < extr)
_putchar(' ');
else
_putchar(35);
}
_putchar('\n');
}
}
else
_putchar('\n');
}

