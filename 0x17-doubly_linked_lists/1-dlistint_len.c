#include "lists.h"

/**
 * dlistint_len - calculates the length of a linked list
 * @h: pointer to doubly linked list
 * Return: number of elements in linked list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t length = 0;

	if (h == NULL)
		return (length);
	while (h->next != NULL)
	{
		length++;
		h = h->next;
	}
	length++;

	return (length);
}
