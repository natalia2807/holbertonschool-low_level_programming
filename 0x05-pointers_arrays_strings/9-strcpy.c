#include "holberton.h"

/**
 * _strcpy - copies string pointed to by src to buffer pointed to by dest
 * @src: source to copy
 * @dest: destination of copy
 *
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int b = 0;

	while (*(src + b))
	{
		*(dest + b) = *(src + b);
		b++;
	}
	*(dest + b) = '\0';
	return (dest);
}