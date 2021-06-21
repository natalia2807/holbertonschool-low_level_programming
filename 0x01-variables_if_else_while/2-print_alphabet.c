#include <stdio.h>
/**
*main - Entry point
*
*Return: Always 0 (sucess)
*/
int main(void)
{
char A[52] = "abcdefghijkmnlopqrstuvwxyz";
int i = 0;
while (i < 52)
{
putchar(A[i]);
i++;
}
return (0);
}
