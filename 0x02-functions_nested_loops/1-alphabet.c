#include <stdio.h>
/**
* print_alphabet - prints the alphabet
*
* Return: Always 0 (secess)
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
