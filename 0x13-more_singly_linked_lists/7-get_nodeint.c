#include "lists.h"

/**
 * get_nodeint_at_index - gets the nth node
 * @head: pointer to linked list
 * @index: index of the node
 *
 * Return: the node or NULL if it doesn't exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int j;
	listint_t *ptr = head;
	j = 0;

	if (index == 0)
		return (head);

	while (ptr && (j < index))
	{
		ptr = ptr->next;
		j++;
	}

	return (ptr ? ptr : NULL);
}
