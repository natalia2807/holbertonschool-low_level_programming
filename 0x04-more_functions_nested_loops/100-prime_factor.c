#include <stdio.h>
int main(void)

{
long int n;

n = 1231952;
long int div = 2, ans = 0, maxFact;
while (n != 0)
{
if (n % div != 0)
div = div + 1;
else
{
maxFact = n;
n = n / div;
if (n == 1)
{
printf("%d is the largest prime factor !", maxFact);
ans = 1;
break;
}
}
}
return (0);
}

