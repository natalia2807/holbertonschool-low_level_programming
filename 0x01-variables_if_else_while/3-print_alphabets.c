#include <stdio.h>
int main(void)
{
  char A[52] = "abcdefghijkmnlopqrstuvwxyzABCDEFGHIJQLMNOPQRSTUVWXYZ";
  
  int i=0;
  while (i< 52)
    {
      putchar(A[i]);
      i++;
    }
  
  return (0);
}
