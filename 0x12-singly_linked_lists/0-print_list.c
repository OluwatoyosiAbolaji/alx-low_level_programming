#include "lists.h"
#include <stdio.h>

/**
  *print_list - prints all elements in a linked list
  *@h: pointer to starting node
  *
  *Return: number of nodes
  */

size_t print_list(const list_t *h)
{
	int i = 0;

	while (h->next)
	{
		printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		i += 1;
	}
	printf("[%d] %s\n", h->len, h->str);
	i += 1;
	return (i);

}
