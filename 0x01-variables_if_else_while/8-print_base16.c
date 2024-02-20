#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 (success)
 */
int main(void)
{
	int hex;

	for (hex = 48; hex < 58; hex++)
	{
		putchar(hex);
	}
	for (hex = 97; hex < 103; hex++)
	{
		putchar(hex);
	}
	putchar('\n');
	return (0);
}
