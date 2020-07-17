#include "function_pointers.h"

/**
 * int_index - searches for an integer
 *
 * @array: array
 * @size: size of the array
 * @cmp: function pointer
 *
 * Return: int
 */

int int_index(int *array, int size, int (*cmp)(int))
{
int a, comp;

if (array == NULL || cmp == NULL || size <= 0)
return (-1);

for (a = 0; a < size; a++)
{
comp = cmp(array[a]);
if (comp != 0)
return (a);
}
return (-1);

}
