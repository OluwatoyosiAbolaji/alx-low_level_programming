#include "main.h"

/**
 * print_diagonal - prints diagonal on the terminal
 * @n: number of time \ should be printed
 */
void print_diagonal(int n)
{
	int i;

	if (n <= 0)
	{
		_putchar('\n');
	} else
	{
		i = 0;
		while (i < n)
		{
			int b;

			b = 0;
			while (b < i)
			{
				_putchar(' ');
				b++;
			}
			_putchar(92);
			_putchar('\n');
			i++;
		}
	}
}
