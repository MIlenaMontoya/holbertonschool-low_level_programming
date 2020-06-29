#include "holberton.h"

/**
 * rev_string - print string reverse
 * @s: string input
 *
 * Return: void
 */

void rev_string(char *s)
{

	int i;

	while (s[i] != 0)
		i++;
	for (i--; i >= 0; i--)
		_putchar(s[i]);
	_putchar('\n');
}
