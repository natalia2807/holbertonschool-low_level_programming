#include <stdio.h>
/**
*main - Entry point
*
*Return: Always 0 (sucess)
*/
int main(void)
{
char A[11] = "0123456789\n";
int i = 0;
while (i < 11)
{
putchar(A[i]);
i++;
}
return (0);
}
