#include "lists.h"

/**
 * insert_dnodeint_at_index - insert new node at given position
 * @h: pointer to head of doubly linked list
 * @idx: index of the list were element should be added
 * @n: number
 * Return: address of the new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i;
	dlistint_t *list = *h, *new;

	if (h == NULL)
		return (NULL);

	if (idx == 0)
		return (add_dnodeint(h, n));
	/* go to index */
	for (i = 0; list != NULL && i < idx; i++)
		list = list->next;
	if (list == NULL && i == idx)
		return (add_dnodeint_end(h, n));
	else if (list != NULL)
	{
		/* create and add node */
		new = malloc(sizeof(dlistint_t));
		if (new == NULL)
			return (NULL);
		new->n = n;
		list->prev->next = new;
		new->prev = list->prev;
		list->prev = new;
		new->next = list;
		return (new);
	}
	return (NULL);
}
