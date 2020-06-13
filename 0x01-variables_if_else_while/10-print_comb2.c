#include <stdio.h>
/**
 * main - num_dobles
 * Return: 0
 */
int main(void)
{
	int  m = 48;
	int  i = 48;

	for (m = 48; m < 58; m++)
		{
	for (i = 48; i < 58; i++)
	{
		putchar(m);
		putchar(i);
		if (m == 57 && i == 57)
		{
		break;
			}
		putchar(',');
		putchar(' ');

				}
		}
	putchar('\n');
	return (0);
}
