#include "holberton.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 *
 * @str: string to copied.
 *
 * Return: NULL
 *
 */

char *_strdup(char *str)

{
	char *c;
	int i, len = 0;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		len++;

	c = malloc(sizeof(char) * (len + 1));

	if (c == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		c[i] = str[i];

	c[len] = '\0';

	return (c);
}
