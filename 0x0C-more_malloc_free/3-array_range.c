#include "holberton.h"
#include <stdlib.h>
/**
 * array_range - creates an array of integers.
 *
 * @min: unsigned int
 * @max: unsigned int
 *
 * Return: pointer of array
 */

int *array_range(int min, int max)

{
void *ptr;
int a;
if (min > max)
return (NULL);

	ptr = malloc(((max - min) + 1) * sizeof(int));
	if (ptr == NULL)
		return (NULL);
             
for (a = 0; a < ((min - max) + 1); a++)
       {

       } 
       
      
return (ptr);
}
