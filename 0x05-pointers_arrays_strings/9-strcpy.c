#include "holberton.h"

/**
 * _strcpy - copy string
 *
 * @dest: first string
 * @src: second string
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
	int cont;

	for (cont = 0; src[cont] != 0; cont++)
	dest[cont] = src[cont];
	dest[cont] = 0;
	return (dest);
}
