#include "main.h"
/**
  *flip_bits - gets number of bits to flip to make alike
  *@n: first value
  *@m: second value
  *Return: number of bits
  */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int count = 0, i = 32, number;

	number = n ^ m;
	while (i > 0)
	{
		count += (number & 1);
		number >>= 1;
		i--;
	}
	return (count);
}

