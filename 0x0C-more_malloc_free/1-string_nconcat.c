#include <stdio.h>
#include <stdlib.h>
/**
 * string_nconcat - concatenates two strings
 * @s1:stirng one
 * @s2:string two
 * @n: n bytes of s2
 * Return: pointer
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)

{
	char *ptr, *str;
	unsigned int a, b;

	str = "";
	if (s1 == NULL)
		s1 = str;
	if (s2 == NULL)
		s2 = str;
for (a = 0; s1[a] != '\0'; a++)
{

}
	ptr = malloc((a + (n * sizeof(*s2) + 1) * sizeof(*ptr)));
	if (ptr == NULL)
		return (NULL);
	for (a = 0; s1[a] != '\0'; a++)
		ptr[a] = s1[a];
	for (b = 0; s2[b] != '\0' && b < n; b++, a++)
		ptr[a] = s2[b];
	ptr[a] = '\0';
	return (ptr);
}
