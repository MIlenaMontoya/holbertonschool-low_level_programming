#include <stdio.h>

/**
 * main - print message  code c
 *
 * Return: 0 always runs
 */

int main(void)
{
char Char;
int Int;
long Long;
long long LongLong;
float Float;

printf("Size of a char: %lu bytes(s)\n", sizeof(Char));
printf("Size of an int: %lu bytes(s)\n", sizeof(Int));
printf("Size of a long int: %lu bytes(s)\n", sizeof(Long));
printf("Size of a long long int:%lu bytes(s)\n", sizeof(LonLong));
printf("Size of a float: %lu bytes(s)\n", sizeof(Float));
return (0);
}
