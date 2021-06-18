#include <stdio.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Return: always 0 (sucess)
 */
int main(void)
{
  int n=randon();

  if (n>0){
    printf("es positivo\n");
  } else if (n==0){
      printf("es cero\n");
    }else{
	printf("es negativo\n");
      }
      return (0);     
}
