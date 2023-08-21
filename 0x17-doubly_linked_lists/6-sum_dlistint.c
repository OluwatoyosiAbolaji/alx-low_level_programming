#include "lists.h"

/**
 * sum_dlistint - get the sum of data in a doubly linked list
 * @head: head of doubly linked list
 * Return: sum of data
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);

	while (head->next != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	sum += head->n;

	return (sum);
}
