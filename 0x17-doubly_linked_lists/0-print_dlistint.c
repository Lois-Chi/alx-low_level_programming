#include "lists.h"

/**
 * print_dlistint - function that prints all the elements of a dlistint_t list.
 * @h: linked list
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *actual = h;
	size_t length = 0;

	while (actual)
	{
		printf("%i\n", actual->n);
		actual = actual->next;
		length++;
	}
	return (length);
}
