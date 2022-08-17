#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * find_listint_loop - finds the loop in a linked list
 * @head: pointer
 * Return: address of the node where the loop starts
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *node = head;
	listint_t *tmp = head;

	if (!head)
		return (NULL);
	while (node && tmp && tmp->next)
	{
		tmp = tmp->next->next;
		node = node->next;
		if (tmp == node)
		{
			node = head;
			while (node != tmp)
			{
				node = node->next;
				tmp = tmp->next;
			}
			return (tmp);
		}
	}
	return (NULL);
}
