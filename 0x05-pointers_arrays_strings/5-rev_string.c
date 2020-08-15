#include "holberton.h"

/**
 * rev_string - print string reverse
 * @s: string input
 *
 * Return: void
 */

void rev_string(char *s)
{
int i;
int index_b;
int index_a;
char aux;
for (i = 0; s[i] != 0; i++)
{
}
index_b = i - 1;
for (index_a = 0; index_a < index_b; index_a++)
{
aux = s[index_a];
s[index_a] = s[index_b];
s[index_b] = aux;
index_b--;
}
}
