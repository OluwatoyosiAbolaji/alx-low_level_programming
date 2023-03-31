#include "lists.h"
#include <string.h>

/**
 * add_node - adds a new node at the beginning of a linked list
 * @head: head of a linked list
 * @str: string to be added
 * Return: address to the new element
 */
list_t *add_node(list_t **head, const char *str)
{
	unsigned int i = 0;
	list_t *node;

	node = malloc(sizeof(list_t));
	if (node == NULL)
		return (NULL);

	node->str = strdup(str);

	while (str[i] != 0)
	{
		i++;
	}
	node->len = i;
	node->next = *head;
	*head = node;

	return (*head);
}
