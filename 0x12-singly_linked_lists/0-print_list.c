#include "lists.h"
#include <stdio.h>

/**
 * print_list - prints all the elements of a linked list
 * @h: singly linked list
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t num = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[%d] %s\n", 0, "(nil)");
		} else
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		h = h->next;
		num++;
	}

	return (num);
}
