#include <stdio.h>
/**
*main - Entry point
*
*Return: Always 0 (sucess)
*/
int main(void)
{
int i = 1;
while (i < 90)
{
putchar((i/10)+'0');
putchar((i%10)+'0');
i++;
putchar(',');
putchar(' ');
}
putchar('\n');
return (0);
}
