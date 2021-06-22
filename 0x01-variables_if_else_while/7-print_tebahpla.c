#include <stdio.h>
/**
*main - Entry point
*
*Return: Always 0 (sucess)
*/
int main(void)
{
char A[26] = "abcdefghijklmnopqrstuvwxyz";
int i = 25;
while (i >= 0)
{
putchar(A[i]);
i--;
}
putchar('\n'); 
return (0);
}
