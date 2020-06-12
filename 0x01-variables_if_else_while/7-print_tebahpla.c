#include <stdio.h>

/**
 * main -rev_abc
 *
 * Return: 0 always runs
 */

int main(void)
{
	char m = 122;

	while (m >= 97)
		{
	putchar (m);
	m--;
		}
	putchar ('\n');
	return (0);
}
