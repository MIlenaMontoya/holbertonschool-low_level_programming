#include "holberton.h"

/**
 * _strlen - length of a strin
 * @s: char input
 *
 * Return: int
 */

int _strlen(char *s)

{
	int length = 0;

while (s[length] != '\0')
length++;
return (length);



}
