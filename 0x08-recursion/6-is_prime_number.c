#include "main.h"

/**
 * evaluate - checks if a number is prime
 * @i: number 1
 * @n: number 2
 * Return: 1 if prime
 */
int evaluate(int i, int n)
{
	if (i == 0)
		return (1);
	if (i == n - 1)
		return (1);
	if (n % i == 0)
		return (0);
	if (n % i != 0)
		return (evaluate(i + 1, n));
	return (0);
}

/**
 * is_prime_number - checks if a number is a prime number
 * @n: number
 * Return: returns 1 if number is prime, else 0
 */
int is_prime_number(int n)
{
	/* declare iterator */
	int i = 2;

	if (n < 2)
		return (0);
	if (n == 2)
		return (1);
	return (evaluate(i, n));
}
