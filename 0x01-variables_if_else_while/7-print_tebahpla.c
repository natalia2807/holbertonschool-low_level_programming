#include <stdio.h>
/**
*main - Entry point
*
*Return: Always 0 (sucess)
*/
int main(void)
{
char A[25] = "abcdefghijklmnopqrstuvwxyz\n";
int i = 25;
while (i > 0)
{
putchar(A[i]);
i--;
}
return (0);
}
