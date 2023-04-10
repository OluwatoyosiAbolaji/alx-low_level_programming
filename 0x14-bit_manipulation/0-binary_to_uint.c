#include "main.h"
/**
  *binary_to_uint - converts binary to decimal
  *@b: pointer to string
  *
  *Return: converted number
  */
unsigned int binary_to_uint(const char *b)
{
	int i = 0;
	int number = 0;

	if (b == NULL)
		return (0);
	while (b[i] != '\0')
	{
		if (b[i] != '1' && b[i] != '0')
			return (0);
		number += b[i] - '0';
		number *= 2;
		i++;
	}
	number /= 2;
	return (number);
}
