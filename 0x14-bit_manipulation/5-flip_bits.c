#include "main.h"

/**
 * flip_bits - returns number of bits you would need to
 * flip to get one number from another
 * @n: number to convert
 * @m: number to get to
 * Return: number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int mask;
	unsigned int count;

	mask = n ^ m;
	count = 0;
	while (mask > 0)
	{
		count += (mask & 1);
		mask = mask >> 1;
	}
	return (count);
}
