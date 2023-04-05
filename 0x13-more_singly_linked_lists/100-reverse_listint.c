#include "lists.h"

/**
 * reverse_listint - reverses a linked list
 * @head: singly linked list pointer
 * Return: pointer to head of reversed list.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *back = NULL, *forth = NULL;

	while (*head)
	{
		forth = (*head)->next;
		(*head)->next = back;
		back = *head;
		*head = forth;
	}
	*head = back;

	return (*head);
}

