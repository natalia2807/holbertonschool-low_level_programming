#include "holberton.h"

/**
 * puts_half - prints the second half of a string
 * @str: string to print
 *
 * Return: void
 */
void puts_half(char *str)
{
	int m, l = 0;

	while (*(str + l))
		l++;
	m = l / 2;
	if (l % 2)
		m += 1;
	while (m < l)
	{
		_putchar(*(str + m));
		m++;
	}
	_putchar('\n');
}
