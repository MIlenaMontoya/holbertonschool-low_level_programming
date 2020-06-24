#include "holberton.h"

/**
 * _puts - print string
 * @str: char input
 *
 * Return: void
 */

void _puts(char *str)

{
	int string;

for (string = 0; str[string] != '\0'; string++)

_putchar(str[string]);
_putchar ('\n');
}
