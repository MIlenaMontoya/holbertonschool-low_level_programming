#include "holberton.h"

/**
 * print_alphabet_x10 - print_abc
 *
 * Description: Prints the alphabet
 *
 * Return: void
 */

void print_alphabet_x10(void)

{

	int i = 0;
	char m;

while (i < 10)
{
m = 'a';
while (m <= 'z')
		{
_putchar (m);
m++;
}
_putchar ('\n');
i++;
}
}
