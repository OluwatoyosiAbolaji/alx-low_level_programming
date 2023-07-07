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
  *get_bit - returns the value of a bit at a given index
  *@n: integer value
  *@index: index of the bit to be returned
  *Return: returns 1 or 0
  */
int get_bit(unsigned long int n, unsigned int index)
{
	int i;

	i = power(2, index);
	n = n & i;
	while (n > 0)
	{
		if (n == 1)
			return (1);
		n = n >> 1;
	}
	return (0);
}
