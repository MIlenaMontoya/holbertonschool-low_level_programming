#include "holberton.h"

/**
 * _strchr - locates a character in a string.
 * @s: char byte
 * @c: string
 *
 * Return: pointer a char o null
 */

char *_strchr(char *s, char c)
{
int cont;

for (cont = 0; s[cont] != '\0'; cont++)
	{
if (s[cont] == c)
return (&s[cont]);
break;
	}
if (s[cont] == c)
	{
   return (&s[cont]);
	}
	return (0);
}
