
#include "holberton.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int _islower(int n)
{
    char m=n+'0';
	if (m >= 'a' && m <= 'z')
		return (1);
	else
		return (0);
}