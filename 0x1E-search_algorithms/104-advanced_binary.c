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
	int middle, ret;

	if (start > end)
		return (-1);

	print_array(array, start, end);
	if (array[start] == value)
		return (start);
	middle = ((end - start) / 2) + start;

	/* Go left */
	if (array[middle] >= value)
		ret = binary_algo(array, value, start, middle);
	/* Go right */
	if (array[middle] < value)
		ret = binary_algo(array, value, middle + 1, end);

	if (ret == -1 && array[middle] == value)
		return (middle);
	return (ret);
}

/**
 * advanced_binary - Advanced bbinary search algorithm
 * @array: array of integers
 * @size: size of the array
 * @value: value to search for
 * Return: index of the first element of the array found
*/
int advanced_binary(int *array, size_t size, int value)
{
	if (array == NULL || size < 1)
		return (-1);

	return (binary_algo(array, value, 0, size - 1));
}
