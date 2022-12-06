#include "lists.h"

/**
 * *get_dnodeint_at_index - function that returns the nth node of a dlistint_t linked list.
 * @head: pointer to the linked list
 * @index: the index of the node, starting from 0
 * Return: if the node does not exist, return NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (!head)
		return (NULL);
	while (head && i < index)
	{
		head = head->next;
		i++;
	}
	return (head ? head : NULL);
}
