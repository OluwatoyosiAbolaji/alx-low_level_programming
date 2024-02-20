#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 (success)
 */
int main(void)
{
	char alphabet;

	for (alphabet = 97; alphabet < 123; alphabet++)
	{
		putchar(alphabet);
	}
	for (alphabet = 65; alphabet < 91; alphabet++)
	{
		putchar(alphabet);
	}
	putchar('\n');
	return (0);
}
