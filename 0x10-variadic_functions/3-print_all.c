#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_char - print a character
 * @a: char
 *
 * Return: 0
 */
void print_char(va_list a)
{
	printf("%c", va_arg(a, int));
}

/**
 * print_string - print a string
 * @s: string
 *
 * Return: 0
 */
void print_string(va_list s)
{
	char *str = va_arg(s, char *);

	if (str == NULL)
		str = "(nil)";
	printf("%s", str);
}

/**
 * print_int - print int
 * @num: int
 *
 * Return: 0
 */
void print_int(va_list num)
{
	printf("%d", va_arg(num, int));
}

/**
 * print_float - prints float
 * @f: float
 *
 * Return: 0
 */
void print_float(va_list f)
{
	printf("%f", va_arg(f, double));
}

/**
 * print_all - prints anything
 * @format: list of argument passed at function
 *
 * Return: 0
 */
void print_all(const char * const format, ...)
{
	int i, j;
	print a_s[] = {
		{"c", print_char},
		{"s", print_string},
		{"i", print_int},
		{"f", print_float},
		{NULL, NULL}
	};
	va_list list_print;
	char *separator = "";

	va_start(list_print, format);
	i = 0;
	while (format && format[i])
	{
		j = 0;
		while (a_s[j].m != NULL)
		{
			if (*(a_s[j].m) == format[i])
			{
				printf("%s", separator);
				a_s[j].fun(list_print);
				separator = ", ";
			}
			j++;
		}
		i++;
	}
	va_end(list_print);
	printf("\n");
}
