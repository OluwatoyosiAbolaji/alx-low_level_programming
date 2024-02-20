#include "main.h"

/**
 * get_bit - returns the value of a bit at a particular index
 * @n: number
 * @index: index
 * Return: value of the bit at index, or -1 if any error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask;

	if (index > (sizeof(n) * 8))
		return (-1);
	mask = 1 << index; /* create mask */
	if ((mask & n) > 0)
		return (1);
	return (0);
}
