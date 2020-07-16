#include "function_pointers.h"

/**
 * print_name - print the name
 *
 * @name: name
 * @f: funcion a pointer char
 *
 * Return: void
 */



void print_name(char *name, void (*f)(char *))
{
f(name);

}

