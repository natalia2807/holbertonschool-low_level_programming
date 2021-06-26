#include "holberton.h"

/**
 * print_diagonal - function that draws a diagonal line on the terminal.
 * @n: input value to check
 * Return: nothing.
 */
void print_diagonal(int n)
{
int b = 0;
int a = 0;
while (b < n)
{
while (a <= b)
{
if (a != b)
_putchar(' ');
else
_putchar(92);
a += 1;
}
_putchar('\n');
b += 1;
a = 0;
}
if (n <= 0)
_putchar('\n');
}

