// Print numbers from 1 to 5
#include <stdio.h>

/**
* main - print_alphabet  - this funtion print the alphabet
*
* Return: Always 0.
*/
int main(void)
{
char n;
n = 'a';
print_alphabet();
while(n <= 'z')
{
putchar(n);
n++;
}
putchar('\n');
return (0);
 }