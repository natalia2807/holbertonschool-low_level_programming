#include <stdio.h>
/**
*main - Entry point
*
*Return: Always 0 (sucess)
*/
int main(void)
{
char A[16] = "0123456789abcdef";
int i = 0;
while (i < 16)
{
putchar(A[i]);
i++;
}
putchar('\n');
return (0);
}
