#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 *
 * Return: always 0 (sucess)
 */
int main(void)
{
  int n=rand();

  if (n>0){
    printf("is positive\n");
  } else if (n==0){
    printf("is zero\n");
    }else{
    printf("is negative\n");
      }
      return (0);     
}
