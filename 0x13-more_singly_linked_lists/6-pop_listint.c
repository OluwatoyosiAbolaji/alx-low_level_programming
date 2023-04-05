#include "lists.h"

/**
 * pop_listint - deletes the head node of a linked list
 * @head: pointer to list
 *
 * Return: data of deleted node
 */
int pop_listint(listint_t **head)
{
	listint_t *ptr = *head;
	int n, i;

	if (ptr == NULL)
		return (0);
	n = ptr->n;

	for (i = 0; i < 1; i++)
	{
		*head = ptr->next;
		free(ptr);
	}

	return (n);
}

