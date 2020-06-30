#include "holberton.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals 
 * of a square matrix of integers
 *
 * @a: name array
 * @size: size array
 * Return: void
 */

void print_diagsums(int *a, int size)

{
	int row, col;

	for (row = 0; row < 8; row++)
		{
			for (col = 0; col < 8; col++)
				{
					_putchar (a[row][col]);
				}
			_putchar('\n');
		}
}
