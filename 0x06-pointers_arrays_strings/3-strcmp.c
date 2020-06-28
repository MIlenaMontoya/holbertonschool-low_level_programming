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
int cont;

for (cont = 0; s1[cont] != '\0' && s2[cont] != '\0'; cont++)

if (s1[cont] != s2[cont])
return (s1[cont] - s2[cont]);
return (0);
}
