#include "lists.h"
/**
  *listint_len - prints the number of elements in a list
  *@h: pointer to first node
  *
  *Return: returns number of elements
  */
size_t listint_len(const listint_t *h)
{
	size_t sum = 0;

	while (h != NULL)
	{
		sum++;
		h = h->next;
	}
	return (sum);
}
