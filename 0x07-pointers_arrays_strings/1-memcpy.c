#include "holberton.h"

/**
 * _memcpy -  memory with a constant bytes
 * @dest: pointer
 * @src: char byte
 * @n: int bytes de memoria
 * Return: pointer dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int cont;

	for (cont = 0; cont < n; cont++)
		dest[cont] = src[cont];
	return (dest);

}
