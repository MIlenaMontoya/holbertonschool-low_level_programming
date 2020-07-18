
#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - dog liberty
 * @d: dog
 *
 * Return: void
 */

void free_dog(dog_t *d)

{
        if (d == 0)
        {
       free(d->name);
       free(d->owner);
       free(d);
               }
return (0);
}