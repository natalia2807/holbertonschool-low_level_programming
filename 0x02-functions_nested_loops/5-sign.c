#include "holberton.h"
#include <stdio.h>
/**
*print_sign - a function that checks for lowercase character
*@n: letter for variable
*
* Return: Always 0 (sucess)
*/
int print_sign(int n)
{

if (n > 0)
{
_putchar('+');
return (1);
}
else if (n == 0)
{
_putchar('0');
return (0);
}
else
{
_putchar('-');
return (-1);
}
}

