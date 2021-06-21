#include <stdio.h>
/**
*main - Entry point
*
*Return: Always 0 (sucess)
*/
int main(void)
{
char A[53] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ\n";
int i = 0;
while (i < 53)
{
putchar(A[i]);
i++;
}
return (0);
}
