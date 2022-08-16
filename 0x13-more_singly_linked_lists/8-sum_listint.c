#include "lists.h"
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>

/**
 * sum_listint - returns the sum of all data of the linked list
 * @head: pointer param
 * Return: sum of data n
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp = head;

	while (temp)
	{
		sum += temp->n;
		temp = temp->next
	}
	return (sum);
}
