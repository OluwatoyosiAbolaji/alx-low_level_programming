#include "lists.h"
size_t print_listint(const listint_t *h)
{
	size_t number = 0;
	char convert;
	while (h != NULL)
	{
		convert = h->n + '0';
		_putchar(convert);
		number++;
		h = h->next;
		_putchar('\n');
	}
	return (number);
}
