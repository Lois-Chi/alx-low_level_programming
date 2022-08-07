#include "main.h"
#include <stddef.h>
#include <stdlib.h>
#include <string.h>

/**
 * *_realloc - reallocates a memory block using alloc and free
 * @ptr: pointer to the memory previously allocated
 * @old_sizee: is the allocated size of the ptr
 * @new_size: is the new size of the new memory block
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *a;

	if (ptr == NULL)
	{
		a = malloc(new_size);
		if (a == NULL)
			return (NULL);
		return (a);
	}
	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	a = malloc(new_size);
	if (a == NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (new_size > old_size)
		_memcpy(a, ptr, old_size);
	else
		_memcpy(a, ptr, new_size);
	free(ptr);
	return (a);
}
/**
 * *_memcpy - copied a memory area
 * @dest: dest memory area
 * @src: src memory area
 * @n: number of bytes
 */
void _memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int z;

	for (z = 0; z < n; z++)
	{
		*(dest + z) = *(src + z);
	}
}              
