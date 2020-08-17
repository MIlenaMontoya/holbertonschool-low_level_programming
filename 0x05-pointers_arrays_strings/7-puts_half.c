#include "holberton.h"
/**
 * puts_half -  prints half of a string
 * @str: array the characters
 *
 * Return: Always 0
 */
void puts_half(char *str)
{
	int a;


	for (a = 5; a <= 9; a++)
	{
		_putchar(str[a]);
	}
	_putchar('\n');
}
