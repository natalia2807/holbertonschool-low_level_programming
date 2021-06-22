
#include <stdio.h>

/**
 * main - Prints all possible combinations of three different digits,
 *        in ascending order, separated by a comma followed by a space.
 *
 * Return: Always 0.
 */
int main(void)
{
int n1 = 0;
int n2 =0;
 int n3 =0;
	while ( n1 < 8)
	{
         n2 = n1 + 1;
		while ( n2 < 9)
		{
             n3 = n2 + 1;
			while ( n3 < 10 )
			{
				putchar((n1 % 10) + '0');
				putchar((n2 % 10) + '0');
				putchar((n3 % 10) + '0');

				if (n1 == 7 && n2 == 8 && n3 == 9){
					break;
				}
				
				putchar(',');
				    putchar(' ');
                n3++;
			}
            n2++;
		}
         n1++;
	}

	putchar('\n');

	return (0);
}