#include "holberton.h"
#include <stdio.h>

/**
 * print_to_98 - function input
 *
 * @n: integer 
 * Return: 0
 */
void print_to_98(int n)

{
	int num;
	for (num = 0; num <= 98; num++)
		{
			printf ("%d, ", num);
			printf ("98");
		}
	if (n > 98)
		num--;
	{
		printf ("%d, ", n);
	}
	printf ("\n");
}
