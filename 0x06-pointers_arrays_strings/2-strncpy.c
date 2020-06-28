#include "holberton.h"

/**
 * _strncpy - copy string
 *
 * @dest: first string
 * @src: second string
 * @n: bytes
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int cont1, cont2;

for (cont1 = 0; src[cont1] != '\0'; cont1++)
	{
for (cont2 = 0; cont2 < n && src[cont2] != '\0'; cont2++)
	{
	dest[cont1] = src[cont2];
	}

	}
	return (dest);

}
