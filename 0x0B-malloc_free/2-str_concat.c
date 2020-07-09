#include <stdio.h>
#include <stdlib.h>

/**
 *str_concat - concatenates two strings
 *
 * @s1: string 1
 * @s2: string 2
 * Return: pointer
 */

char *str_concat(char *s1, char *s2)
{
	char *str;
	char *p;
	int a, b, c;

	p = "";
	if (s1 == NULL)
		s1 = p;
	if (s2 == NULL)
		s2 = p;
	for (a = 0; s1[a] != '\0'; a++)
		;
	for (b = 0; s2[b] != '\0'; b++)
		;
	b++;
	str = malloc((a + b) * sizeof(*str));
	if (str == NULL)
		return (NULL);
	for (c = 0; s1[c] != '\0'; c++)
		str[c] = s1[c];
	b = 0;
	while (s2[b] != '\0')

	{
	str[c] = s2[b];
	b++;
	c++;
	}
	str[c] = '\0';
	return (str);
}
