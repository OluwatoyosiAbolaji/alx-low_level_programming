#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: pointer to linked list
 * @idx: index
 * @n: new node to be added
 * Return: address of the new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *ptr, *temp = *head;

	ptr = malloc(srizeof(listint_t));
	if (!ptr || !head)
		return (NULL);

	ptr->n = n;

	if (idx == 0)
	{
		ptr->next = *head;
		*head = ptr;
		return (ptr);
	}

	for (i = 0; i < idx && temp; i++)
	{
		if (i == idx - 1)
		{
			ptr->next = temp->next;
			temp->next = ptr;
			return (ptr);
		}
		temp = temp->next;
	}

	return (NULL);
}
