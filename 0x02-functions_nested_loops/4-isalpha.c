#include "holberton.h"
/**
*_isalpha - a function that checks for lowercase character
*@c: single letter input
*
* Return: Always 0 (sucess)
*/
int _isalpha(int c)
{
char m = c;
if ((m >= 'a' && m <= 'z') || (m >= 'A' && m <= 'Z'))
{
return (1);
}
else
{
return (0);
}
}
