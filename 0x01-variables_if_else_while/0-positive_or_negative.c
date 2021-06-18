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
    printf("es positivo\n");
  } else if (n==0){
      printf("es cero\n");
    }else{
	printf("es negativo\n");
      }
      return (0);     
}
