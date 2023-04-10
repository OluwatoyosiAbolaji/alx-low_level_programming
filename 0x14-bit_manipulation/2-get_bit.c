#include "main.h"
/**
  *get_bit - gets the bit of a particular index
  *@n: number in decimal
  @index: index to be searched from reverse
  *Return: bit
  */
int get_bit(unsigned long int n, unsigned int index)
{
	return ((n >> index) & 1);
}
