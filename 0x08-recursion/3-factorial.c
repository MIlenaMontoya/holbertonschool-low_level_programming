#include "holberton.h"

/**
 * factorial - factorial of a given number
 * @n: int input
 *
 * Return: int
 */

int factorial(int n)
{
	int fact = 1;

	if (n < 0)
		{
	return (-1);
		}
	if (n > 1)
		fact = factorial(n - 1) * n;
	return (fact);

}
