#include "holberton.h"
#include <stdlib.h>
/**
 * create_array - creates an array and initializes it with a specific char
 *
 * @size: unsigned int
 * @c: char
 *
 * Return: pointer
 */

char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	if (size <= 0)
		return (NULL);
	arr = malloc(sizeof(char) * size);
	if (arr == NULL)
		return (NULL);
while (i < size)
for (i = 0; i < size; i++)
{
arr[i] = c;
}

	return (arr);
}
