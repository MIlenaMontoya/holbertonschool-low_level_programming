#include "function_pointers.h"

/**
 * array_iterator - print function paramethers
 *
 * @array: array
 * @size: size of the array
 * @action: function pointer
 *
 * Return: void
 */

        void array_iterator(int *array, size_t size, void (*action)(int))
{
       unsigned int a;

        for (a = 0; a < size; a++)
{
        action(array[a]);
}
}