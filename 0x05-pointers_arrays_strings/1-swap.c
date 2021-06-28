#include "holberton.h"

/**
* swap_int - swap the values of int a and int b 
* @a: int
* @b: int
*
* Return: void
*/
void swap_int(int *a, int *b)
{
int c;
c = *a;
*a = *b;
*b = c ;
}