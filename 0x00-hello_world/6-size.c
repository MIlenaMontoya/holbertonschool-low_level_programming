#include <stdio.h>

/**
 * main - print message  code c
 *
 * Return: 0 always runs
 */

int main(void)
{
char M;
int I;
long L;
long long E;
float NA;

printf("Size of a char: %d byte(s)\n", sizeof(M));
printf("Size of an int: %d byte(s)\n", sizeof(I));
printf("Size of a long int: %d byte(s)\n", sizeof(L));
printf("Size of a long long int: %d byte(s)\n", sizeof(E));
printf("Size of a float: %d byte(s)\n", sizeof(NA));
return (0);
}
