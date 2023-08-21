#include "lists.h"

/**
 * print_dlistint - prints all ekements of a dlistint_t linked list
 * @h: pointer to doubly linked list
 * Return: number of nodes in linked list
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t length = 0;

	if (h == NULL)
		return (length);
	while (h->next != NULL)
	{
		length++;
		printf("%d\n", h->n);
		h = h->next;
	}
	length++;
	printf("%d\n", h->n);

	return (length);
}
