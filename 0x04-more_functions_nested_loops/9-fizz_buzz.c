#include <stdio.h>

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

if (n % 15 == 0)
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
	printf("%d ", n);
}
printf("\n");
return (0);
}
