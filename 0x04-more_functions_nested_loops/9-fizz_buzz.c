#include <stdio.h>

/**
 * main - print num de 0 at 100 Fizuzzzzz
 *
 *
 * Return: 0
 */

int main(void)
{

	int num;

for (num = 1; num <= 100; num++)
	{
if (num % 15 == 0)
	printf("FizzBuzz ");
else if (num % 5 == 0)
	printf("Buzz ");
else if (num % 3 == 0)
printf("Fizz ");
else
printf("%i ", num);
}
printf("\n");
return (0);
}
