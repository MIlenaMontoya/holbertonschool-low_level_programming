#include "holberton.h"

/**
 * _isdigit - lowercase
 * @c: checks for a digit
 *
 * Description: function that checks for a digit
 * Return: 1 for lowercase or 0 not
 */

int _isdigit(int c)

{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
