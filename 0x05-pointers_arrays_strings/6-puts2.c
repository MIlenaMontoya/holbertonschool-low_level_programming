#include "holberton.h"
/**
 * puts2 - prints every other character of a string
 * @str: array the characters
 *
 * Return: Always 0.
 */
void puts2(char *str)
{
	int i;
	int index;
	int count;
	int modul;

	for (i = 0; str[i] != 0; i++)
	{
	}
	index = i - 1;
	for (count = 0; count <= index; count++)
	{
		modul = count % 2;
		if (modul == 0)
		{
			_putchar(str[count]);
		}
	}
	_putchar('\n');
}
