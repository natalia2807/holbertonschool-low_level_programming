#include <stdio.h>
/**
*main - Entry point
*
*Return: Always 0 (sucess)
*/
int main(void)
{
int i = 1;
 int suma = 2;
while (i < 90)
{
putchar((i/10)+'0');
putchar((i%10)+'0');
 if(i%10 == 9){
   i = i+suma;
   suma++;

 }
i++;
 if(i!=9);{
putchar(',');
putchar(' ');
 }
}
putchar('\n');
return (0);
}
