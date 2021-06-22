#include <stdio.h>
/**
* main - check the code for Holberton School students.
*
* Return: Always 0.
*/
void print_alphabet(void)
{
char n;
n = 'a';
while(n <= 'z')
{
putchar(n);
n++;
}
putchar('\n');
return (0);
 }