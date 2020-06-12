#include <stdio.h>

/**
 * main - num, combi
 *
 * Return: 0 always runs
 */

int main(void)
{
	int m = '0';

while (m <= '9')
{
putchar (m);

if (m != '9')
	{
putchar (',');
putchar (' ');
}
else
{
putchar ('\n');
}
m++;
	}
	return (0);
}
