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
	int  cont;
	
for (cont = 0; cont < n && src[cont]; cont++)
	{
dest[cont] = src[cont];
	}

if ( cont < n)
	{
	dest[cont] = '\0';
	cont++;
	}
	return (dest);

}
