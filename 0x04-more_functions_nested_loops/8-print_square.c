#include "holberton.h"

/**
 * print_square - function that prints a square, followed by a new line
 * @size: size of square
 * Return: nothing.
 */

void print_square(int size)
{
int cua, b;

if (size > 0)
{
for (b = 0; b < size; b++)
{
for (cua = 0; cua < size; cua++)
{
_putchar(35);
}
_putchar('\n');
}
}
else
_putchar('\n');
}
