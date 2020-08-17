#include "holberton.h"

/**
 * rev_string - print string reverse
 * @s: string input
 *
 * Return: void
 */

void rev_string(char *s)

{
int i, a, b;
char aux;

for (i = 0; s[i] != 0; i++)
{
}
b = i - 1;
for (a = 0; a < b; a++)
{
aux = s[a];
s[a] = s[b];
s[b] = aux;
b--;
}
}
