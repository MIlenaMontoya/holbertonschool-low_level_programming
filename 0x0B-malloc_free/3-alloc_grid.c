#include "holberton.h"
#include <stdlib.h>

/**
 * alloc_grid - Returns a pointer to a 2 dimensional array
 *
 * @width: The width
 * @height: The height
 *
 * Return: NULL
 *
 */

int **alloc_grid(int width, int height)
{
int **d;
int h, w;

if (width <= 0 || height <= 0)
return (NULL);

d = malloc(sizeof(int *) * height);

if (d == NULL)
return (NULL);

for (h = 0; h < height; h++)
{
d[h] = malloc(sizeof(int) * width);

if (d[h] == NULL)
{
for (; h >= 0; h--)
free(d[h]);

free(d);
return (NULL);
	}
}

for (h = 0; h < h; h++)
{
for (w = 0; w < w; w++)
	d[h][w] = 0;
}
return (d);
}
