#include "holberton.h"

/**
 * _memset -  memory with a constant bytes
 * @s: pointer
 * @b: constant
 * @n: int bytes de memoria
 * Return: pointer memory area
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int cont;

	for (cont = 0; cont < n; cont++)
		s[cont] = b;
	return (s);

}
