#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - frees a list
 * @head: pointer
 */
void free_listint(listint_t *head)
{
	listint_t *actual;

	while (head)
	{
		actual = head->next;
		free(head);
		head = actual;
	}
}
