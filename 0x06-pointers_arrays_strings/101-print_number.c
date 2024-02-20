#include "main.h"

/**
 * print_number - prints n
 * @n: number to be printed
 */
void print_number(int n)
{
	/* intialize variables */
	unsigned int m, d, count;

	if (n < 0)
	{
		/* print minus sign */
		_putchar(45);
		/* convert n to a positive number */
		m = n * -1;
	} else
	{
		m = n;
	}

	d = m;
	count = 1;

	/* while the number is greater than 9 */
	while (d > 9)
	{
		/* divide by 10 and multiply count by 10 */
		d /= 10;
		count *= 10;
	}

	for (; count >= 1; count /= 10)
	{
		/* print each digit */
		_putchar(((m / count) % 10) + 48);
	}
}
