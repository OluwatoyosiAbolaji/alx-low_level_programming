#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @n: number
 * @index: index
 * Return: 1 if success else -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	if (n == NULL)
		return (-1);
	if (index > (sizeof(n) * 8))
		return (-1);
	mask = 1 << index;
	*n = (~mask) & *n;
	return (1);
}
