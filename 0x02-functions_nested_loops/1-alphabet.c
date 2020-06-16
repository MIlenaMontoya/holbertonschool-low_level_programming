#include "holberton.h"

/**
 * print_alphabet - abc
 *
 * Description: Prints the alphabet 
 *
 * Return: void
 */

void print_alphabet(void)
{
	char m = 97;

	while (m < 123)
	{
	_putchar (m);
	m++;
	}
	_putchar ('\n');
}
