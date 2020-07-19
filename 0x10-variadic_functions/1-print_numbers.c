#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
* print_numbers - prints numbers
*
* @separator: the string to be printed between numbers
* @n: number of integers passed to the function
*
* Return: 0
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{

va_list num_list;
unsigned int i;

va_start(num_list, n);

for (i = 0; i < n; i++)
{
printf("%d", va_arg(num_list, int));
if (separator != NULL && i < n - 1)
printf("%s", separator);
}
va_end(num_list);
printf("\n");
}
