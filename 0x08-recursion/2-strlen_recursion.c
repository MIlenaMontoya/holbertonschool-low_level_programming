#include "holberton.h"

/**
 * _strlen_recursion - print string long
 * @s: string input
 *
 * Return: int
 */

int _strlen_recursion(char *s)

{
	int i = 0;

if (*s)
	{
i = _strlen_recursion(s + 1);
return (i + 1);
}
return (0);
}
