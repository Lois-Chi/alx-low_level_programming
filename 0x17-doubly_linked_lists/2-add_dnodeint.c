#include "lists.h"

/**
 * *add_dnodeint - function that adds a new node at the beginning.
 * @head: double pointer to the linked list
 * @n: integer param
 * Return: the address of the new element, or NULL if it failed.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *tmp;

	tmp = *head;
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->prev = NULL;
	new->n = n;
	if (tmp == NULL)
	{
		*head = new;
		new->next = NULL;
		return (new);
	}
	new->next = tmp;
	tmp->prev = new;
	*head = new;
	return (new);
}
