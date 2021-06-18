#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{
printf("Size of a char: %zd bytes\n", sizeof(char));
printf("Size of an int: %zd bytes\n", sizeof(int));
printf("Size of a long int: %zd bytes\n", sizeof(long));
printf("Size of a long long int: %zd bytes\n", sizeof(long long));
printf("Size of a float: %zd bytes\n", sizeof(float));
return (0);
}
