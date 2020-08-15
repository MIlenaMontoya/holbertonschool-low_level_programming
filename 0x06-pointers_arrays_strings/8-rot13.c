#include "holberton.h"
/**
 * rot13 - encodes a string
 * @s: string
 *
 * Return: Always 0
 */
char *rot13(char *s)
{
	int i, j;
	char abc[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char code[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; s[i] != '\0'; i++)

		for (j = 0; abc[j]; j++)

			if (s[i] == abc[j])
			{
				s[i] = code[j];
break;
			}


	return (s);
}
