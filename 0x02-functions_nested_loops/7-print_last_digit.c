#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 *
 * @n: number
 *
 * Return: value of the last digit of n
 */
int print_last_digit(int n)
{
	int r;

	if (n < 0)
	{
		r = (n * -1) % 10;
		_putchar(r + '0');
	} else
	{
		r = n % 10;
		_putchar(r + '0');
	}

	return (r);
}

