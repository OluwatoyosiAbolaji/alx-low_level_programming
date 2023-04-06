#include "lists.h"

/**
 * reverse_listint - reverses a linked list
 * @head: singly linked list pointer
 * Return: pointer to head of reversed list.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *back = NULL;
	listint_t *prev = NULL;

	while (*head)
	{
		back = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = back;
	}
	return (prev);
}

