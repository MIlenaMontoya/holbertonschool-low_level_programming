#ifndef HEADER_H
#define HEADER_H

#include <stdarg.h>
/**
 * struct all_print - name the structure
 * @m: print type
 * @fun: print function
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
