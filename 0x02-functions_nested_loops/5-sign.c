#include "holberton.h"
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
printf("+");
return (1);
}
else if(n == 0)
{
printf("0");
return (0);
}
else
{
printf("-");
return (-1);
}
}

