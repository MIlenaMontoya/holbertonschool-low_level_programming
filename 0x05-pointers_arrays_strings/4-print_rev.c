#include "holberton.h"

/**
 * print_rev - print string reverse
 * @s: string input
 *
 * Return: void
 */

void print_rev(char *s)
{

int i;

while (s[i] != 0)
	i++;
for (i--; i >= 0; i--)
_putchar(s[i]);
_putchar('\n');
}
