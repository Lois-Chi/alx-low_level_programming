#include "lists.h"
#include <stddef.h>
#include <stdio.h>
/**
 * print_listint - prints all the elements of the list
 * @h: pointer
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t a;

	for (a = 0; h; a++)
	{
		printf("%i\n", h->n);
		h = h->next;
	}
	return (a);
}
