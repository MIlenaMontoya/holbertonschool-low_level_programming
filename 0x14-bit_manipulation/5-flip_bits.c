#include "holberton.h"
/**
 * flip_bits - returns the number of bits you would need to flip
 * to get from one number to another
 * @n: integer one
 * @m: integer two
 *
 * Return: number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int tmp;
	unsigned int bits;

	tmp = n ^ m;
	bits = 0;
	while (tmp != 0)
	{
		if ((tmp & 1) == 1)
		{
			bits++;
		}
		tmp = tmp >> 1;
	}
	return (bits);
}
