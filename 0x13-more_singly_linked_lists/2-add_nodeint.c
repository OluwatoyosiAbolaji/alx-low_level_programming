#include "lists.h"
#include <stdio.h>
/**
  *add_nodeint - adds node to the beginning of a list
  *@head: pointer to the pointer to the head
  *@n: new data
  *
  *Return: pointer to the new node
  */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *ptr;

	ptr = malloc(sizeof(listint_t));
	if (ptr == NULL)
		return (ptr);
	ptr->n = n;
	ptr->next = *head;
	*head = ptr;
	return (ptr);
}
