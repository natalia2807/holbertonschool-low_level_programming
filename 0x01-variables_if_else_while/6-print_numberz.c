#include <stdio.h>
/**
*main - Entry point
*
*Return: Always 0 (sucess)
*/
int main(void)
{
  int A[12] = {0,1,2,3,4,5,6,7,8,9,0};
int i = 0;
while (i < 12)
{
putchar(A[i]+'0');
i++;
}
putchar('\n');
return (0);
}
