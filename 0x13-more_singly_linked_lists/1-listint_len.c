#include "lists.h"

/**
 * listint_len - returns the length of a linked list
 * @h: singly linked list
 * Return: number of node
 */
size_t listint_len(const listint_t *h)
{
	size_t len = 0;

	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		len++;
		h = h->next;
	}

	return (len);
}
