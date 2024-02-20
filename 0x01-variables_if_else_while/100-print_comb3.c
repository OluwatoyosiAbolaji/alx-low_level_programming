#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 (success)
 */
int main(void)
{
	int digit1, digit2;

	for (digit1 = 48; digit1 < 58; digit1++)
	{
		for (digit2 = digit1; digit2 < 58; digit2++)
		{
			if (digit1 != digit2)
			{
				putchar(digit1);
				putchar(digit2);
				if (digit1 == 56 && digit2 == 57)
				{
					continue;
				} else
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
