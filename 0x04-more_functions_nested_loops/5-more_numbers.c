#include "holberton.h"

/**
 * more_numbers - numbers for 10 line
 *
 *
 * Return: 0
 */

void more_numbers(void)

{

	char a, b, num, line;
for  (line = 0; line < 10; line++)
	{
for (num = 0; num <= 14; num++)
	{
	if (num < 10)
	b = num;
	else
	{
a = num / 10;
b = num % 10;
	_putchar (a + '0');
	}
	_putchar (b + '0');
	}
	_putchar ('\n');
}

}
