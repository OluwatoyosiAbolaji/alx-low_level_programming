#include "main.h"
/**
  *flip_bits - tells how many bits to flip to get to a number
  *@n: first number
  *@m: second number
  *Return: returns number of bits to be flipped
  */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int a, j;
	unsigned int count = 0;

	a = n ^ m;
	while (a > 0)
	{
		j = a & 1;
		if (j == 1)
			count++;
		a = a >> 1;
	}
	return (count);
}
