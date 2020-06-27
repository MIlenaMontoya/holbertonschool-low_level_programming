#include "holberton.h"

/**
 * _strcmp - compares two strings
 *
 * @s1: first string
 * @s2: second string
 *
 * Return: int
 */

int _strcmp(char *s1, char *s2)
{
	if (*s1 < *s2 && *s1 > *s2 && *s1 == *s2 && s2 != '\0')
	{
	s1++;
	s2++;
}

return (*s1 - *s2);
}
