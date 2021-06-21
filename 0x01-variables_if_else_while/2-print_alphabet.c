#include <stdio.h>
/**
*main - Entry point
*
*Return: Always 0 (sucess)
*/
int main(void)
{
char A[27] = " abcdefghijklmnopqrstuvwxyz";
int i = 0;
while (i < 27)
{
putchar(A[i]);
i++;
}
return (0);
}
