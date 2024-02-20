#include "main.h"
#include <stdio.h>

/**
 * reverse_array - reverses an array
 * @a: array to be reversed
 * @n: number of elements
 * Return: nothing
 */
void reverse_array(int *a, int n)
{
	/* declare variables */
	int i, temp, *start, *end;

	/* start and end == a */
	start = a;
	end = a;

	/* set end variable to end of array */
	for (i = 0; i < n - 1; i++)
	{
		end++;
	}


	for (i = 0; i < n / 2; i++)
	{
		temp = *end;
		*end = *start;
		*start = temp;

		start++;
		end--;
	}
}
