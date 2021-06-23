#include "holberton.h"
#include <stdio.h>
/**
*_isalpha - a function that checks for lowercase character
*@c: letter for variable
*
* Return: Always 0 (sucess)
*/
int print_sign(int n)
{

if (n > 0)
{
printf("+",n);
return (1);
}
else if(n == 0)
{
printf("0",n);
return (0);
}
else
{
printf("-",n);
return (-1);
}
}

