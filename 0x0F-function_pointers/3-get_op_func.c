 #include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"

/**
 * get_op_func - Function pointer
 *
 * @s: argument
 *
 * Return: pointer the function operator
 */
int (*get_op_func(char *s))(int, int)
{
op_t ops[] = {
{"+", op_add},
{"-", op_sub},
{"*", op_mul},
{"/", op_div},
{"%", op_mod},
{NULL, NULL}
};

int i = 0;

while (ops[i].op != NULL)
if ((*ops[i].op == s[0]) && (s[1] == '\0'))
{
return (ops[i].f);
}
i++;
{
printf("Error\n");
exit(99);
}
}
