#include "main.h"

/**
  *raise - raises a number to a power
  *@a: number to be raised
  *@b: power to be raised to
  *Return: raised number
  */
int raise(int a, int b)
{
	if (b == 0)
		return (1);
	return (a * raise(a, (b - 1)));
}

/**
  *clear_bit - sets a bit to 0
  *@n: pointer to integer
  *@index: index of number
  *Return: 1 on success, -1 on failure
  */
int clear_bit(unsigned long int *n, unsigned int index)
{
	int a;

	if (index > (sizeof(*n) * 8))
		return (-1);
	a = raise(2, index);
	a = ~(a);
	*n = *n & a;
	return (1);
}
