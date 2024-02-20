#include "search_algos.h"
#include <math.h>

/**
 * jump_search - Searches for a value in an array using jump search
 * @array: array of integers
 * @size: size of array
 * @value: value to search for
 * Return: first index where value was located or -1
*/
int jump_search(int *array, size_t size, int value)
{
	size_t jump, i, start;

	if (array == NULL || size < 1)
		return (-1);

	/* Jump Search */
	jump = sqrt(size);
	for (i = 0; i < size && array[i] < value; i += jump)
	{
		start = i;
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}

	printf("Value found between indexes [%lu] and [%lu]\n", start, i);
	/* Linear search */
	for (; start <= i && start < size; start++)
	{
		printf("Value checked array[%lu] = [%d]\n", start, array[start]);
		if (array[start] == value)
			return (start);
	}

	return (-1);
}
