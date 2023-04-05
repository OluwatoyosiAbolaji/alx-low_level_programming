#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a node at a particular index
 * @head: pointer to singly linked list
 * @index: index
 * Return: 1 (success) -1(failure)
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *temp = *head, *present = NULL;

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

	present = temp->next;
	temp->next = present->next;
	free(present);
	return (1);
}
