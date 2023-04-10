#include "main.h"
/**
  *get_bit - gets the bit of a particular index
  *@n: number in decimal
  *@index: index to be searched from reverse
  *Return: bit
  */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > (sizeof(n) * 8))
		return (-1);
	return ((n >> index) & 1);
}
