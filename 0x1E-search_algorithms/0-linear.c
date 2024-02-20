#include "search_algos.h"

/**
 * linear_search - searches for a value in an array of integers
 * using the linear search algorithm
 * @array: array of integers
 * @size: size of array
 * @value: value to search for
 * Return: first index where value is located, else -1
*/
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL || size < 1)
		return (-1);

	/* Iterate array */
	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}

	return (-1);
}
