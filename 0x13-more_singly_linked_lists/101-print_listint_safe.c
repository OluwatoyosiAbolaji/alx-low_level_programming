#include "lists.h"
#include <stdio.h>
/**
  *print_listint_safe - prints a list with a loop
  *@head: pointer to the first node
  *
  *Return: number of nodes
  */
size_t print_listint_safe(const listint_t *head)
{
	int diff;
	size_t number = 0;

	while (head != NULL)
	{
		diff = head->n - head->next->n;
		number++;
		printf("[%p] %d" (void *)head, head->n);
		if (diff < 0)
			printf ("-> [%p] %d", (void *)head->next, head->next->n);
		else
			head = head->next;
	}
	return(number);
}
