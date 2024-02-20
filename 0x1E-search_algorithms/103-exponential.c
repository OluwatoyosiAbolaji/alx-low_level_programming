#include "search_algos.h"

/**
 * print_array - prints an array
 * @array: array of integers
 * @start: starting index
 * @end: end index
*/
void print_array(int *array, int start, int end)
{
	int i;

	printf("Searching in array: ");
	for (i = start; i < end; i++)
		printf("%d, ", array[i]);
	printf("%d\n", array[i]);
}

/**
 * binary_algo - binary search algorithm
 * @array: array of integers
 * @value: value to be searched
 * @start: start index
 * @end: end index
 * Return: value if found, else -1
*/
int binary_algo(int *array, int value, int start, int end)
{
	int middle;

	if (start > end)
		return (-1);

	print_array(array, start, end);
	middle = ((end - start) / 2) + start;

	if (array[middle] == value)
		return (middle);

	/* Go left */
	if (array[middle] > value)
		return (binary_algo(array, value, start, middle - 1));
	/* Go right */
	return (binary_algo(array, value, middle + 1, end));
}

/**
 * exponential_search - Exponential Search Algorithm
 * @array: array of integers
 * @size: size of the array
 * @value: value to search for in the array
 * Return: index of the first element found else -1
*/
int exponential_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL || size < 1)
		return (-1);

	/* Find range */
	for (i = 1; i < size && array[i] < value; i *= 2)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
	}
	if (i < size)
		size = i + 1;
	printf("Value found between indexes [%lu] and [%lu]\n", i / 2, size - 1);

	return (binary_algo(array, value, i / 2, size - 1));
}
