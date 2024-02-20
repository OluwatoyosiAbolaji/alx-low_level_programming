#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node
 * @head: singly linked list
 * @index: index of the node
 * Return: the node or NULL if it doesn't exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *temp = head;

	if (index == 0)
		return (head);

	while (temp && i < index)
	{
		temp = temp->next;
		i++;
	}

	return (temp ? temp : NULL);
}
