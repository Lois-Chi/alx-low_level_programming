#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint_end - adds a new node at the end of the list
 * @head: double pointer
 * @n: integer
 * Return: address to the new element
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *node;
	listint_t *actual = *head;

	node = malloc(sizeof(listint_t));
	if (!node)
		return (NULL);
	node->n = n;
	node->next = NULL;
	if (*head == NULL)
	{
		*head = node;
		return (node);
	}
	while (actual->next)
		actual = actual->next;
	actual->next = node;
	return (node);
}
