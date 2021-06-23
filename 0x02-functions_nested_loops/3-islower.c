#include "holberton.h"
/**
* _islower - a function that checksfor lowercase character
*@n: letter for variable 
*
* Return: Always 0 (sucess)
*/
int _islower(int n)
{
char m = n;
if (m >= 'a' && m <= 'z')
{
return (1);
}
else
{
return (0);
}
}
