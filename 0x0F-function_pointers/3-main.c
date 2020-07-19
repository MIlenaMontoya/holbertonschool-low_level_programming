#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"

/**
 * main - Function Principal
 *
 * @argc: Argument int
 * @argv: Argument array
 *
 * Return: 0
 */
int main(int argc, char **argv)
{
int result;

if (argc != 4)
{
printf("Error\n");
exit(98);

}

if ((*argv[2] == '/' || *argv[2] == '%') && *argv[3] == '0')
{
printf("Error\n");
exit(100);
}
result = get_op_func(argv[2])(atoi(argv[1]), atoi(argv[3]));
printf("%d\n", result);
return (0);
}
