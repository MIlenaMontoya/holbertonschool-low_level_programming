#include <stdio.h>
#include "holberton.h"

/**
 * main - print num de 0 at 100 Fizuzzzzz
 *
 *
 * Return: 0
 */

int main(void)
{

	int n;

for (n = 1; n <= 100; n++)

if ((n % 3 == 0) && (n % 5 == 0))
	{
	printf("FizzBuzz ");
	}
else if (n % 5 == 0)
	{
	printf("Buzz ");
	}
else if (n % 3 == 0)
	{
	printf("Fizz ");
	}
else
	{
	printf("%i ", n);
	}
	printf("\n");
return (0);
}
