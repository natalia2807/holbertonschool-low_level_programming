
#include "holberton.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int _islower(int n)
{
	if (n+'0' >= 'a' && n+'0' <= 'z')
		return (1);
	else
		return (0);
}