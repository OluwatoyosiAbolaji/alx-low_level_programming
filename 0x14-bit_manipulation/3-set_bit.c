#include "main.h"

/**
  *power - raises a number to a power
  *@a: number to be raised
  *@b: power to be raised to
  *Return: raised number
  */
int power(int a, int b)
{
	int i = 0;
	unsigned long int ans = 1;

	if (b == 0)
		return (1);
	while (i < b)
	{
		ans *= a;
		i++;
	}
	return (ans);
}
/**
  *set_bit - sets a bit at a given index to 1
  *@n: integer to be altered
  *@index: index of int to be altered
  *Return: 1 on success or -1 on failure
  */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int a;

	if (index >= (sizeof(*n) * 8))
		return (-1);
	a = power(2, index);
	*n = *n | a;
	return (1);
}
