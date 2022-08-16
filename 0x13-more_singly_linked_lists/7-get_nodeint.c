#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>

/**
 * get_nodeint_at_index - returns the nth node of the linked list
 * @head: pointer
 * @index: index of the node, starting at 0
 * Return: the nth node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *node = head;

	while (node && i < index)
	{
		node = node->next;
		i++;
	}
	return (node ? node : NULL);
}
