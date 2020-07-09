#include "holberton.h"
#include <stdlib.h>
/**
 * _calloc - creates an array and initializes it with a specific char
 *
 * @nmemb: unsigned int
 * @size: unsigned int
 *
 * Return: pointer of array
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
     unsigned int a;

	if (nmemb == 0 || size == 0) 
		return (NULL);

	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);
for (a = 0; a <= (nmemb * size); a++)
{

}
return (ptr);		
	
}