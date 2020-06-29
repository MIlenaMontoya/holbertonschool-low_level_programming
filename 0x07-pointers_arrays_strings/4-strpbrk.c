#include "holberton.h"

/**
 * _strpbrk - locates a character in a string.
 * @s: char byte
 * @accept: string
 *
 * Return: pointer a char o null
 */

char *_strpbrk(char *s, char *accept)

{
	unsigned int i, cont;

for (i = 0; s[i] != '\0'; i++)
	{
	for (cont = 0; accept[cont] != '\0'; cont++)
		{
		if (s[i] == accept[cont])
		return (s + i);
		}
	}
return (0);
}
