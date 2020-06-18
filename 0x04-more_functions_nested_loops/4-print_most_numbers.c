#include "holberton.h"

/**
 * print_most_numbers - print num de 0 at 9 not 2 and 4
 *
 *
 * Return: 0
 */

void print_most_numbers(void)

{
	char a;

for (a = '0'; a <= '9'; a++)
	{
	if (a != '2' && a != '4')
	_putchar(a);
	}
	_putchar('\n');
}
