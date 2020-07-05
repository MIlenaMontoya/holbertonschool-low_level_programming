#include "holberton.h"

/**
 * _strspn -  memory with a constant bytes
 * @s: pointer
 * @accept: char byte
 *
 * Return: num bytes
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, cont = 0;

for (i = 0; s[i] != '\0'; i++)
	{
if (cont != i)
break;
for (j = 0; accept[j] != '\0'; j++)
if (s[i] == accept[j])
cont++;
	}
	return (cont);
}
