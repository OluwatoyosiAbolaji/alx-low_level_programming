#include "main.h"
#include <stdio.h>
/**
  *power - finds exponential of an unsigned value
  *@a: first number
  *@b: power
  *
  *Return: new value
  */
int power(int a, int b)
{
	if (b == 0)
		return (1);
	return (a * power(a, (b - 1)));
}
/**
  *set_bit - sets a bit of a particular index to 1
  *@n: pointer to integer
  *@index: index to number
  *Return: 1 on success
  */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int number;

	if (index >= (sizeof(*n) * 8))
		return (-1);
	number = power(2, index);
	*n = *n | number;
	return (1);
}
