#include "lists.h"

/**
 * insert_dnodeint_at_index - function that inserts a new node at a given position.
 * @h: double pointer
 * @idx: the index of the list where the new node should be added.
 * @n: integer param
 * Return: the address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *actual;
	dlistint_t *new;
	size_t size;

	actual = *h;
	size = 0;
	if (h == NULL)
		return (NULL);
	if (idx == 0)
		return (add_dnodeint(h, n));
	while (actual != NULL)
	{
		size++;
		actual = actual->next;
	}
	if (size < idx)
		return (NULL);
	if (size == idx)
		return (add_dnodeint_end(h, n));
	actual = *h;
	while (--idx)
		actual = actual->next;
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = actual->next;
	actual->next->prev = new;
	new->prev = actual;
	actual->next = new;
	return (new);
}
