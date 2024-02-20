#include "main.h"

/**
 * binary_to_uint - converts a binary number to unsigned int
 * @b: binary number
 * Return: unsigned int or NULL or 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i, decimal = 0;

	if (b == NULL)
		return (0);

	for (i = 0; b[i]; i++)
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);
		decimal = 2 * decimal + (b[i] - '0');
	}

	return (decimal);
}
