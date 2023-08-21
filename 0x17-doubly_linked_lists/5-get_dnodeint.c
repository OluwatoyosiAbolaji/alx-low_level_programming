#include "lists.h"

/**
 * get_dnodeint_at_index - gets node at index
 * @head: head of doubly linked lits
 * @index: index of node
 * Return: node at index
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;

	if (head == NULL)
		return (NULL);

	/* iterate till element */
	for (i = 0; head != NULL && i < index; i++)
		head = head->next;

	return (head);
}
