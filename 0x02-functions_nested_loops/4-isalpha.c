#include "holberton.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int _isalpha(int c)
{
    char m=c;
	if (m >= 'a' && m <= 'z'){
		return (1);
    }else{
		return (0);
    } 
}