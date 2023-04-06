#include "lists.h"

/**
 * sum_listint - sums the data in a linked list
 * @head: pointer to linked list
 *
 * Return: total data
 */
int sum_listint(listint_t *head)
{
	int total = 0;

	if (head == NULL)
		return (0);
	while (head != NULL)
	{
		total += head->n;
		head = head->next;
	}
	return (total);
}
