#include <stdio.h>
/**
*main - Entry point
*
*Return: Always 0 (sucess)
*/
int main(void)
{
char A[26] = "abcdefghijklmnopqrstuvwxyz";
int i = 0;
while (i < 25)
{
putchar(A[i]);
i++;
}
return (0);
}
