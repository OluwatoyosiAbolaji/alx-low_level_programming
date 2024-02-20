#include "lists.h"

/**
 * pop_listint - deletes the head node of a linked list
 * @head: singly linked list
 * Return: n
 */
int pop_listint(listint_t **head)
{
	listint_t *temp = *head;
	int n, j;

	if (temp == NULL)
		return (0);
	n = temp->n;

	for (j = 0; j < 1; j++)
	{
		*head = temp->next;
		free(temp);
	}

	return (n);
}
