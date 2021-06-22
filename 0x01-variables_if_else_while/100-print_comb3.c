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

 if(i!=89){
putchar(',');
putchar(' ');
 }
 i++;
}
putchar('\n');
return (0);
}
