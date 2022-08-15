#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list
 * @h: pointer param
 * Return: number of elements in the list
 */
size_t list_len(const list_t *h)
{
	int a;

	for (a = 0; h; a++)
	{
		h = h->next;
	}
	return (a);
}
