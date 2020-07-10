#include "holberton.h"
#include <stdlib.h>
/**
 * array_range - creates an array of integers.
 *
 * @min: unsigned int
 * @max: unsigned int
 *
 * Return: pointer of array
 */

int *array_range(int min, int max)

{
int *ptr = NULL;
int a;

if (min > max)
return (NULL);

	ptr = malloc(((max - min) + 1) * sizeof(int));
if (ptr)
for (a = 0; min <= max; a++, min++)
{
ptr[a] = min;
}
return (ptr);
}
