#include "lists.h"
#include <string.h>

/**
 * add_node_end - adds a new node at the end of a linked list
 * @head: head
 * @str: string
 * Return: address of the new element
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *temp;
	unsigned int len = 0;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->str = strdup(str);
	while (str[len] != '\0')
	{
		len++;
	}
	new->len = len;
	new->next = NULL;
	temp = *head;

	if (temp == NULL)
	{
		*head = new;
	} else
	{
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = new;
	}

	return (*head);
}
