#include <stdio.h>

/**
* main - causes an infinite loop
*@i: is a number
* Return: Always 0 (sucess)
*/

int main(void)
{
int i;

printf("Infinite loop incoming :(\n");

i = 0;

while (i < 10)
{
/*putchar(i);*/
i++;
}
printf("Infinite loop avoided! \\o/\n");
return (0);
}
