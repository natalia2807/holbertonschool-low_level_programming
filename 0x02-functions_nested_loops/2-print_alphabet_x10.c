#include <stdio.h>
/**
* main - Entry point
*
* Return: Always 0 (sucess)
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
