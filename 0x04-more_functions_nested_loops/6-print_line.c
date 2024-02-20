#include "main.h"

/**
 * print_line - prints a straight line
 * @n: number of times '_' should be printed
 */
void print_line(int n)
{
	int i;

	if (n < 0)
	{
		n = 0;
	}

	i = 0;
	while (i < n)
	{
		_putchar(95);
		i++;
	}
	_putchar('\n');
}
