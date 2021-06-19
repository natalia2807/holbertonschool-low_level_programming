#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Return: always 0 (sucess)
 */
int main(void)
{
int n;
 printf("enter the number n:");
 scanf("%d", &n);
if (n>0){
printf("%d is positive\n",n);
} else if (n==0){
printf("%d is zero\n",n);
}else{
printf("%d is negative\n",n);
}
return (0);     
}
