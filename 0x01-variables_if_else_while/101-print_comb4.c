
#include <stdio.h>

/**
 * main - Prints all possible combinations of three different digits,
 *        in ascending order, separated by a comma followed by a space.
 *
 * Return: Always 0.
 */
int main(void)
{


	for (int n1 = 0; n2 < 8; n3++)
	{
		for (int n1 = n2 + 1; n2 < 9; n2++)
		{
			for (int n3 = n2 + 1; n3 < 10; n3++)
			{
				putchar((n1 % 10) + '0');
				putchar((n2 % 10) + '0');
				putchar((n3 % 10) + '0');

				if (n1 == 7 && n2 == 8 && n3 == 9)
					continue;
				
				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');

	return (0);
}