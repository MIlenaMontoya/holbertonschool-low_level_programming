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

printf("Size of a char: %lu bytes(s)\n", (unsigned long)sizeof(Char));
printf("Size of an int: %lu bytes(s)\n", (unsigned long)sizeof(Int));
printf("Size of a long int: %lu bytes(s)\n", (unsigned long)sizeof(Long));
printf("Size of a long long int:%lu bytes(s)\n", (unsigned long)sizeof(LongLong));
printf("Size of a float: %lu bytes(s)\n", (unsigned long)sizeof(Float));

return (0);
}
