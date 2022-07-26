#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2-D array
 * @width: width
 * @height: height
 * Return: pointer
 */
int **alloc_grid(int width, int height)
{
	int w, x, y, z;
	int **a;

	if (width <= 0 || height <= 0)
		return (NULL);
	a = malloc(height * sizeof(int *));
	if (a == NULL)
	{
		free(a);
		return (NULL);
	}
	for (w = 0; w < height; w++)
	{
		a[w] = malloc(width * sizeof(int));
		if (a[w] == NULL)
		{
			for (x = w; x >= 0; x--)
			{
				free(a[x]);

			}
			free(a);
			return (NULL);
		}
	}
	for (y = 0; y < height; y++)
	{
		for (z = 0; z < width; z++)
			a[y][z] = 0;
	}
	return (a);
}
