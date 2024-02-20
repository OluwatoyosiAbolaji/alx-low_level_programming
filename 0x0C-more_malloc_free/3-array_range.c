#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: minimum value of integer in array
 * @max: maximum value of integer in array
 * Return: buffer
 */
int *array_range(int min, int max)
{
	int i, len;
	int *buffer;

	if (min > max)
		return (NULL);

	len = (max - min) + 1;
	buffer = malloc(len * sizeof(int));
	if (buffer == NULL)
		return (NULL);

	for (i = 0; i < len; i++, min++)
	{
		buffer[i] = min;
	}

	return (buffer);
}
