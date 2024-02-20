#include "main.h"

/**
 * print_times_table - prints n time table
 * @n: integer
 *
 * Return: 0
 */
void print_times_table(int n)
{
	int i, j, result;

	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			if (n < 0 || n > 15)
			{
				break;
			}
			result = i * j;

			if (i == n - 1 && j == n - 1)
			{
				if (result < 0)
				{
					_putchar(result + '0');
					_putchar('\n');
				} else
				{
					if (j == n - 1)
					{
						_putchar((result / 10) + '0');
						_putchar((result % 10) + '0');
						_putchar('\n');
					} else
					{
						_putchar((result / 10) + '0');
						_putchar((result % 10) + '0');
						_putchar(',');
						_putchar(' ');
					}
				}
			}
		}
	}
}
