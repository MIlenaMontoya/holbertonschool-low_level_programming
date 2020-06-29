#include "holberton.h"

/**
 * _strcat - concat two strings
 *
 * @dest: first string
 * @src: second string
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
int cont1, cont2;

for (cont1 = 0; dest[cont1] != '\0'; cont1++)
	{
}
for (cont2 = 0; src[cont2] != '\0'; cont2++, cont1++)
	{
dest[cont1] = src[cont2];
	}
cont1++;
dest[cont1] = '\0';
return (dest);
}
