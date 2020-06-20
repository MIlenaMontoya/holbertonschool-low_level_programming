#include "holberton.h"

/**
 * print_square - print square whit #
 *@size: int input
 *
 * Return: 0
 */

void print_square(int size)

{
	int f, c;

if (size <= 0)
		{
_putchar ('\n');
	}
else
for (f = 1; f <= size; f++)
{
for (c = 1; c <= size; c++)
{
_putchar ('#');
}
_putchar ('\n');
}
}
