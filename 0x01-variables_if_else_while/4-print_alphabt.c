#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - abc
 *
 * Return: 0 always runs
 */

int main(void)
{
	char m = 'a';
while (m <= 'z')
{
if (m != 'e' && m != 'q')
putchar (m);
m++;
}
	putchar ('\n');

	return (0);
}
