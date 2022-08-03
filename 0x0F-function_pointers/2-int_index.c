#include "function_pointers.h"


/**
 * int_index - searches for an integer
 * @array: array param
 * @size: number of elements in an array
 * @cmp: function pointer used to compare values
 * Return: 0, 1 or -1, based on a condition
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0 || array == NULL || cmp == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(*(array + i)))
			return (i);
	}
	return (-1);
}
