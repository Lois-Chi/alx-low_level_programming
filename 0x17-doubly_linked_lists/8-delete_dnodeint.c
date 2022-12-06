#include "lists.h"

/**
 * delete_dnodeint_at_index - function that deletes the node at index.
 * @head: double pointer
 * @index: index of the node that should be deleted. Index starts at 0
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *actual;
	size_t size;

	actual = *head;
	size = 0;
	if (*head == NULL)
		return (-1);
	while (actual != NULL)
	{
		size++;
		actual = actual->next;
	}
	if (size < index + 1)
		return (-1);
	actual = *head;
	if (index == 0)
	{
		*head = actual->next;
		if (actual->next)
			actual->next->prev = NULL;
		actual->next = NULL;
		free(actual);
		return (1);
	}
	while (index--)
		actual = actual->next;
	actual->prev->next = actual->next;
	if (actual->next)
		actual->next->prev = actual->prev;
	free(actual);
	return (1);
}
