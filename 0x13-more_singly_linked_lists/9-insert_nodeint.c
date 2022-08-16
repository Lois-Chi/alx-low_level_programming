#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: double pointer
 * @idx: index of the list where the new node should be added
 * @n: integer param
 * Return: address of the new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int a;
	listint_t *node;
	listint_t *position = *head;

	node = malloc(sizeof(listint_t));
	if (!node || !head)
		return (NULL);
	node->n = n;
	node->next = NULL;
	if (idx == 0)
	{
		node->next = *head;
		*head = node;
		return (node);
	}
	for (a = 0; position && a < idx; a++)
	{
		if (a == idx - 1)
		{
			node->next = position->next;
			position->next = node;
			return (node);
		}
		else
		position = position->next;
	}
	return (NULL);
}
