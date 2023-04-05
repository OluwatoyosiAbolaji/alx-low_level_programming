#include "lists.h"

/**
 * free_listint - frees all nodes
 * @head: singly linked list
 *
 *Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	temp = head;
	while (temp != NULL)
	{
		head = head->next;
		free(temp);
		temp = head;
	}
}
