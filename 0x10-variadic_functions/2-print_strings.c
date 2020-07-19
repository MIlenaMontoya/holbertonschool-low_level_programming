#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
* print_strings - prints string
*
* @separator: the string to be printed between strings
* @n: number of strings passed to the function
*
* Return: 0
*/
void print_strings(const char *separator, const unsigned int n, ...)
{

va_list str;
unsigned int i;
char *word;

va_start(str, n);

for (i = 0; i < n; i++)
{
word = va_arg(str, char *);
if (word == NULL)
printf("(nil)");
else
printf("%s", word);
if (separator != NULL && i < n - 1)
printf("%s", separator);
}
printf("\n");
va_end(str);
}

