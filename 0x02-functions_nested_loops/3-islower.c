#include <stdio.h>
#include <ctype.h>

#include "holberton.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    int r;
test_islower('H');
    r = islower('H');
    putchar(r + '0');
    r = islower('o');
    putchar(r + '0');
    r = islower(108);
    putchar(r + '0');
    putchar('\n');
    return (0);
}