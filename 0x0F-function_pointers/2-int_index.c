#include "function_pointers.h"
#include <stdlib.h>

/**
 * int_index - searches for an integer
 * @array: array
 * @size: number of elements in the array
 * @cmp: pointer to the function to compare values
 * Return: index of the first element for which cmp returns !0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i, ret;

	if (!array || !size || !cmp)
		return (-1);
	if (size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		ret = cmp(array[i]);

		if (ret)
		{
			return (i);
		}
	}
	return (-1);
}
