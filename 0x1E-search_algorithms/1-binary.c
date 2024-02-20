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
 * binary_search - searches for a value in a sorted array of integers
 * using binary search algprithm
 * @array: array of integers
 * @size: size of array
 * @value: value to be searched for
 * Return: index where value is located, else -1
*/
int binary_search(int *array, size_t size, int value)
{
	if (array == NULL || size < 1)
		return (-1);

	return (binary_algo(array, value, 0, size - 1));
}
