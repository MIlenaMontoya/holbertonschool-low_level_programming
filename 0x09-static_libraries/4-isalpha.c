#include "holberton.h"

/**
 * _isalpha - lowercase
 * @c: letter lowercase or uppercase
 *
 * Description: lowercase or uppercase
 *
 * Return: 1 for lowercase or 0 not
 */

int _isalpha(int c)

{
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
	return (1);
		}
	else
		{
	return (0);
		}
}
