#include "holberton.h"
#include <stdlib.h>
/**
 * create_array - creates an array and initializes it with a specific char
 *
 * @size: unsigned int, size of array
 * @c: char array
 *
 * Return: pointer of array
 */

char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i = 0;

	if (size <= 0)
		return (NULL);
	arr = malloc(sizeof(char) * size);
	if (arr == NULL)
		return (NULL);
while (i < size)
		{
	*(arr + i) = c;
	i++;
		}
	return (arr);
}