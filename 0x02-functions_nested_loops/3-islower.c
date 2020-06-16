#include "holberton.h"

/**
* _islower - lowercase
* @c: letter to be checked
*
* Description: minusculas
*
* Return: 1 for lowercase or 0 not
*/

int _islower(int c)

{
	if (c >= 'a' && c <= 'z')
		{
	return (1);
		}
	else
{
	return (0);
	}
}
