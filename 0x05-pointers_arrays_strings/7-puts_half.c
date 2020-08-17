#include "holberton.h"
/**
 * puts_half -  prints half of a string
 * @str: array the characters
 *
 * Return: Always 0
 */
void puts_half(char *str)
{
	int j, a, x;

	for (j = 0; str[j] != 0; j++)
	{
	}
	x = j - 1;
	a = (x / 2) + 1;
	for (; a <= x; a++)
	{
		_putchar(str[a]);
	}
	_putchar('\n');
}
