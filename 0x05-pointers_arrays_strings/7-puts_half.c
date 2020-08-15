#include "holberton.h"
/**
 * puts_half -  prints half of a string
 * @str: array with the characters
 *
 * Return: Always 0.
 */
void puts_half(char *str)
{
	int j;
	int index;
	int a;

	for (j = 0; str[j] != 0; j++)
	{
	}
	index = j - 1;
	a = (index / 2) + 1;
	for (; a <= index; a++)
	{
		_putchar(str[a]);
	}
	_putchar('\n');
}
