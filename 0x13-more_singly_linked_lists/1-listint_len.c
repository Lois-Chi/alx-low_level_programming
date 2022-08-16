#include "lists.h"

/**
 * listint_len - prints the number of elements in a linked list
 * @h: pointer
 * Return: number of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t a;

	for (a = 0; h; a++)
	{
		h = h->next;
	}
	return (a);
}
