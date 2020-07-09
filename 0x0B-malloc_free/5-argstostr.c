#include "holberton.h"
#include <stdlib.h>

/**
 * argstostr - Concatenates all arguments of your program
 *
 * @ac: number of arguments
 * @av: array of pointers
 *
 * Return: NULL if ac == 0 or av == NULL
 * pointer to the new string.
 */
char *argstostr(int ac, char **av)
{
	char *str;
	int a, b, i, size = ac;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (a = 0; a < ac; a++)
	{
		for (b = 0; av[a][b]; b++)
			size++;
	}

	str = malloc(sizeof(char) * size + 1);

	if (str == NULL)
		return (NULL);

	i = 0;

	for (a = 0; a < ac; a++)
	{
		for (b = 0; av[a][b]; b++)
			str[i++] = av[a][b];

		str[i++] = '\n';
	}

	str[size] = '\0';

	return (str);
}
