
#include <stdio.h>
#include "_putchar.h"


/**
* main - print_alphabet  - this funtion print the alphabet
*
* Return: Always 0.
*/
void  print_alphabet(void)

{
char n;
n = 'a';

while(n <= 'z')
{

_putchar(n);
n++;
}
_putchar('\n');

 }