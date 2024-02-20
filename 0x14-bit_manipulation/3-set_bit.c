#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: number
 * @index: index
 * Return: 1 if success else -1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	if (n == NULL)
		return (-1);
	if (index > (sizeof(n) * 8))
		return (-1);
	mask = 1 << index; /* create mask */
	*n = mask | *n; /* n pointer equals mask or n pointer*/
	return (1);
}
