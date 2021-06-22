#include <stdio.h>
/**
*main - Entry point
*
*Return: Always 0 (sucess)
*/
int main(void)
{
int i = 12;
while (i < 790)
{
putchar((i / 10) + '0');
putchar((i % 10) + '0');
if (i != 790)
{
putchar(',');
putchar(' ');
}
i++;
}
putchar('\n');
return (0);
}
