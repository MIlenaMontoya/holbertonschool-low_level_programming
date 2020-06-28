#include "holberton.h"

/**
 * reverse_array - reverse array
 *
 * @n: Elements array
 * @a: array
 *
 * Return: int
 */

void reverse_array(int *a, int n)
{
	int aux, i;

	for (i = n - 1; i >= n / 2; i--)
	{
		aux = a[n - 1 - i];
		a[n - 1 - i] = a[i];
		a[i] = aux;
}
}
