#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a node at a particular index
 * @head: singly linked list
 * @index: index
 * Return: 1 (success) else -1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *temp = *head, *current = NULL;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
		return (1);
	}

	for (i = 0; i < index - 1; i++)
	{
		if (!temp || !(temp->next))
			return (-1);
		temp = temp->next;
	}

	current = temp->next;
	temp->next = current->next;
	free(current);
	return (1);
}
