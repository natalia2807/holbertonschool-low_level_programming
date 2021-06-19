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
srand(time(0));
int n=(rand()%-98);
if (n>0){
printf("%d is positive\n",98);
} else if (n==0){
printf("%d is zero\n",n);
}else{
printf("%d is negative\n",n);
}
return (0);     
}
