#include <stdio.h>
/**
* main - check the code for Holberton School students.
*
* Return: Always 0.
*/
int main(void)
{
print_alphabet();
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