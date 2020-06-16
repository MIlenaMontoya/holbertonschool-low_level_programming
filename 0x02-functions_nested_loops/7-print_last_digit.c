#include "holberton.h"

/**
 * print_last_digit - lastDigit
 * @i: input int
 *
 * Description: last digit if
 *
 * Return: x
 */

int print_last_digit(int i)

{

int n, x;

x = i % 10;
if (x < 0)
	x = -x;
n = (x + '0');
_putchar (n);
return (x);
}

