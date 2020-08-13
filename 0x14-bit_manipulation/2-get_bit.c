#include "holberton.h"

/**
 * get_bit - returns the value of a bit at a given index.
 * @n: integer number to find the binary index.
 * @index: index of the binary to return.
 *
 * Return: value the index or -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long aux;

	if (index >= (sizeof(n) * 8) - 1)
	{
		return (-1);
	}
	aux = n >> index;
	return (aux & 1);
}
