#include <stdio.h>
/**
* 1-alphabet.c - a funtion print the alphabet
*
* Return: Always 0.
*/
void  print_alphabet(void)
{
char n;
n = 'a';
while (n <= 'z')
{
putchar(n);
n++;
}
putchar('\n');
}
