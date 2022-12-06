#include "lists.h"

/**
 * dlistint_len - function that returns the number of elements in a linked dlistint_t list.
 * @h: linked list
 * Return: number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *actual = h;
	size_t length = 0;

	while (actual)
	{
		actual = actual->next;
		length++;
	}
	return (length);
}
