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
		if (alphabet == 101 || alphabet == 113)
		{
			continue;
		} else
		{
			putchar(alphabet);
		}
	}
	putchar('\n');
	return (0);
}
