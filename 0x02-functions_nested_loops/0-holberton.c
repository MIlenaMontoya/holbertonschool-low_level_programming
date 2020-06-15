#include <stdio.h>

/**
 * main - string
 *
 * Return: 0 always runs
 */

int main(void)
{
int m = 0;
char string[] = "Holberton";
while (string[m])
{
	putchar (string[m]);
	m++;
}
	putchar ('\n');
	return (0);
}
