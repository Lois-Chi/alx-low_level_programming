#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * delete_nodeint_at_index - deletes node at index
 * @head: double pointer
 * @index: index of the node that should be deleted
 * Return: 1 at success and -1 at failure
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *node = *head;
	listint_t *current = NULL;
	unsigned int a = 0;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		free(node);
		return (1);
	}
	while (a < index - 1)
	{
		if (!current || !(current->next))
			return (-1);
		node = node->next;
		a++;
	}
	current = node->next;
	node->next = current->next;
	free(current);
	return (1);
}
