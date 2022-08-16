#include "lists.h"
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>

/**
 * pop_listint - deletes the head node of a linked list
 * @head: double pointer
 * Return: the head node data n
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int node;

	if (!head || !*head)
		return (0);
	node = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;
	return (node);
}
