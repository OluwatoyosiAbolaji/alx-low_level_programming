#include "main.h"
/**
  *binary_to_uint - converts binary to unsigned int
  *@b: string of bits
  *Return: converted integer
  */
unsigned int binary_to_uint(const char *b)
{
	int i = 0, pow = 1, a = 0;
	unsigned int j = 0;

	if (b == NULL)
		return (0);
	for (i = 0; b[i];)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		i++;
	}
	i--;
	while (i >= 0)
	{
		a = b[i] - '0';
		a *= pow;
		pow *= 2;
		j += a;
		i--;
	}
	return (j);
}
