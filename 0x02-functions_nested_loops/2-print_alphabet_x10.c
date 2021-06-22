#include <stdio.h>
/**
* main - print_alphabet  - this funtion print the alphabet
*
* Return: Always 0.
*/
void  print_alphabet_x10(void)
{
int n, a;
a = 0;
while (a < 10)
{
for (n = 'a'; n <= 'z'; n++)
{
putchar(n);
}
a++;
putchar('\n');
}
}
