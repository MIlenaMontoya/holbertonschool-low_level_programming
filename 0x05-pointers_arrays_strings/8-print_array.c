#include <stdio.h>
#include "holberton.h"

/**
 * print_array - print order array
 *
 * @n: Elements array
 * @a: array
 *
 * Return: int
 */

void print_array(int *a, int n)

{
	int i;

for (i = 0; i < n; i++)
{
printf("%d", a[i]);
	if (i < n - 1)
	printf(", ");
	}
printf("\n");
}
