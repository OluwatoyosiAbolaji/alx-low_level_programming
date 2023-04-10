#include "main.h"
/**
  *flip_bits - gets number of bits to flip to make alike
  *@n: first value
  *@m: second value
  *Return: number of bits
  */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int i = 32, j = 0;

	while (i > 0)
	{
		if ((n & 1) ^ (m & 1))
		{
			j++;
		}
		n >>= 1;
		m >>= 1;
		i--;
	}
	return (j);
}

