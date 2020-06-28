#include "holberton.h"

/**
 * leet - encodes a string into 1337
 * @c: changes chars
 *
 * Return: char
 */

char *leet(char *c)
{
	int i, j;

char letters[] = "aAeEoOtTlL";
char nums[] = "4433007711";

for (i = 0; c[i] != '\0'; i++)
for (j = 0; j < 10; j++)
if (c[i] == letters[j])
c[i] = nums[j];
return (c);
}
