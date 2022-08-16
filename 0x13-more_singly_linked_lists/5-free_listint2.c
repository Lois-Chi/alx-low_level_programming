#include "lists.h"
#include <stdio.h>
#include <stddef.h>

/**
 * free_listint2 - frees a listint_t list
 * @head: double pointer
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
		return;
	while (*head)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}
	*head = NULL;
}
