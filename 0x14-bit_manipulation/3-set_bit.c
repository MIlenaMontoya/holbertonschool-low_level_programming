#include "holberton.h"
/**
 * set_bit - sets the value of a bit to 1 at a given index.
 * @n: address of the integer
 * @index: index to the bit.
 *
 * Return: 1 if it worked, or -1 if an error occurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	int vset = 1;

	if (index > (sizeof(*n) * 8) - 1)
	{
		return (-1);
	}
	vset = vset << index;
	*n = (*n | vset);
	return (1);

}
