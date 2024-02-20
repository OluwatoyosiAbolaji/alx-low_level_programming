#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 (success)
 */
int main(void)
{
	char alphabet;

	for (alphabet = 122; alphabet > 96; alphabet--)
	{
		putchar(alphabet);
	}
	putchar('\n');
	return (0);
}
