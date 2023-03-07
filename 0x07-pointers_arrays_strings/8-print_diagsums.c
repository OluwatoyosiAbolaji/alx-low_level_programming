#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of a diagonal
 * @a: matrix
 * @size: size of a
 */
void print_diagsums(int *a, int size)
{
	/* declare variables */
	int i;
	int sum1, sum2;

	sum1 = 0;
	sum2 = 0;

	i = 0;
	while (i < size)
	{
		/*sums for diagsums*/
		sum1 += a[i];
		sum2 += a[size - i - 1];
		a += size;

		i++;
	}

	printf("%i, %i\n", sum1, sum2);
}
