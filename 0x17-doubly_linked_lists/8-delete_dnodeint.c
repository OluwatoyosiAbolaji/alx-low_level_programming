#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes node at index of a doubly linked list
 * @head: head of doubly linked
 * @index: index of node
 * Return: 1 if succeeded, else -1
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *list = *head, *temp = *head;
	unsigned int length = 0, i;

	if (head == NULL || *head == NULL)
		return (-1);
	/* get length of list */
	while (temp->next != NULL)
	{
		length++;
		temp = temp->next;
	}
	length++;

	if (index == 0)
	{
		*head = list->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(list);
		return (1);
	}

	/* go to index */
	for (i = 0; list != NULL && i < index; i++)
		list = list->next;
	if (list == NULL)
		return (-1);
	list->prev->next = list->next;
	if (list->next != NULL)
		list->next->prev = list->prev;
	free(list);
	return (1);
}
