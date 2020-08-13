#include <stdio.h>
/**
 * main - function printipal
 *
 * Return: Always
 */
int main(void)
{
	int x;
	int y;
	int z;

	for (x = 0; x <= 7; x++)
	{
		y = x + 1;
		for (; y <= 8; y++)
		{
			z = y + 1;
			for (; z <= 9; z++)
			{
				putchar(x + '0');
				putchar(y + '0');
				putchar(z + '0');
				if (x != 7)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
