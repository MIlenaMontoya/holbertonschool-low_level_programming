#ifndef HEADER_H
#define HEADER_H

#include <stdarg.h>
/**
 * struct print - print type with corresponding print function
 * @t: print type
 * @f: print function
 */
typedef struct all_print
{
	char *m;
	void (*fun)();
} print;

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif
