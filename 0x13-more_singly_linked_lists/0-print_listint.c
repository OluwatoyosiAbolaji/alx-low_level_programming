#include "lists.h"
#include <stdio.h>

/**
 * print_listint - prints all elements of a linked list
 * @h: singly linked list
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t len = 0;

	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		printf("%d\n", h->n);
		len++;
		h = h->next;
	}

	return (len);
}
