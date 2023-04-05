#include "lists.h"
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *ptr;
	listint_t *temp;


	temp = *head;
	ptr = malloc(sizeof(listint_t));
	ptr->n = n;
	ptr->next = NULL;
	if (temp == NULL)
	{
		*head = ptr;
	} 
	else
	{
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = ptr;
	}
	return (ptr);
}
