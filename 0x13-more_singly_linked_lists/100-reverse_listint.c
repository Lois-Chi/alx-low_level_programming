#include "list.h"
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>

/**
 * reserve_listint - reverves a listint_t linked list
 * @head: double pointer
 * Return: a pointer to the first node of the reserve list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *temp; 
	listint_t *actual;

	if (*head == NULL)
		return (NULL);
	actual = *head;
	while (actual->next)
	{
		temp = actual->next;
		actual->next = temp->next;
		temp->next = *head;
		*head = temp;
	}
	return (*head);
}
