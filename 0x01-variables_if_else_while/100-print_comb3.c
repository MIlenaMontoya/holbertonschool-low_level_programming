#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int i;
	int k;

	for (i = 0; i <= 8; i++)
	{
	k = i + 1;
	while (k <= 9)
	{
		putchar(i + '0');
		putchar(k + '0');
		if (i != 8)
	{
		putchar(',');
		putchar(' ');
	}
		k++;
	}
	}
	putchar('\n');
	return (0);
}