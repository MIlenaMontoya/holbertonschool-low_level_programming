#include "holberton.h"

/**
 * print_triangle - print triangle whit #
 * @size: int input
 * Description: triangle whit #
 * Return: 0
 */
void print_triangle(int size)
{
	int  f, c;

if (size <= 0)
	{
	_putchar ('\n');
	}
else
	{
for (f = 1; f <= size; f++)
	{
for (c = 1; c <= size; c++)
{
if (c != size && c <= size - f)
{
_putchar (' ');
	}
	else

_putchar ('#');

_putchar ('\n');
	}
	}     
}
}
