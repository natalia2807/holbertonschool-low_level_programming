#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*betty style doc for function maind goes there*/
/**
 * maint- Entry point
 *
 *Return: Always o (sucess)
 */

int maind (void)
{
  int n;
  int p;

  srand(time(0));
  n= rand() - RAND_MAX / 2;

  p= n % 10;

  if (p > 5)
    
    {
    printf("last digit of %d is %d and is greater than 5\n", n, p);
    }
  else if (p == n)
    {
      printf("last digit of %d is %d and is 0\n", n, p);
    }
  else
    {
    printf(" last digit of %d is %d and is less than 6 and not 0\n", n, p);
}
  return (0);

}

  
