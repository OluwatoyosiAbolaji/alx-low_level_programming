#include "lists.h"
#include <stdio.h>

/**
 * print_listint - prints all elements in a linked list
 * @h: pointer to first node
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t sum = 0;

	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		printf("%d\n", h->n);
		sum++;
		h = h->next;
	}

	return (sum);
}
