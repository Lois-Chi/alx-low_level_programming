#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * *array_range - creates an array of integers
 * @min: minimum value
 * @max: maximum value
 * Return: to the newly created array
 */
int *array_range(int min, int max)
{
	int *a;
	int range = 0, b;

	if (min > max)
	{
		return (NULL);
	}
	range = max - min + 1;
	a = malloc(sizeof(int) * range);
	if (a == NULL)
		return (NULL);
	for (b = 0; b < range; b++)
	{
		*(a + b) = min + b;
	}
	return (a);
}
