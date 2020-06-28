#include "holberton.h"

/**
 * string_toupper - replace letters
 * @a: string converted
 *
 * Return: char
 */
char *string_toupper(char *a)
{
	int cont;
for (cont = 0; a[cont] != '\0'; cont++)
	{
if (a[cont] >= 'a' && a[cont] <= 'z')
	a[cont] -= 32;
}
return (a);

}
