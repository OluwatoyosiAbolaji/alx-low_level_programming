#include "lists.h"

/**
 * sum_listint - sums a linked list
 * @head: singly linked list
 * Return: sum
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (sum);

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
