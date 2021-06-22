#include <stdio.h>
/**
*main - Entry point
*
*Return: Always 0 (sucess)
*/
int main(void)
{
char A[10] = "0123456789";
int i = 0;
while (i < 10)
{
putchar(A[i]);
putchar(',');
putchar(' ');
i++;
}
return (0);
}
