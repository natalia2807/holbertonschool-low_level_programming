#include <stdio.h>
/**
*main - Entry point
*
*Return: Always 0 (sucess)
*/
int main(void)
{
char A[25] = "abcdefghijklmnopqrstuvwxyz";
int i = 24;
while (i > 0)
{
putchar(A[i]);
i--;
}
putchar('\n'); 
return (0);
}
