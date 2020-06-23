#include "holberton.h"

/**
 * swap_int - swaps the values of two integers
 * @a: first int input pointer
 * @b: second int input pointer
 *
 * Return: void
 */

void swap_int(int *a, int *b)

{
	int swaps;

	swaps = *a;
	*a = *b;
	*b = swaps;


}
