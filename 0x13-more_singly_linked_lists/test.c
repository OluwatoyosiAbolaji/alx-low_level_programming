#include <stdlib.h>
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)7
{
	unsigned int i;

	for (i = 0; i < index; i++)
	{
		if(head)
			head = head->next;
		else
			return (NULL);
	}
	return(head);
}
