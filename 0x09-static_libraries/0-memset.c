#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: pointer to string to be filled
 * @b: value to be filled
 * @n: number of variables to be filled
 * Return: returns s
 */
char *_memset(char *s, char b, unsigned int n)
{
	/* declare variables, i to count n, j to index s */
	unsigned int i;
	int j;

	j = 0;

	for (i = 0; i < n; i++)
	{
		s[j] = b;
		j++;
	}
	return (s);
}
