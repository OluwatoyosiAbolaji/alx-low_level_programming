#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 (success)
 */
int main(void)
{
	int digit1a, digit1b, digit2a, digit2b;

	for (digit1a = 48; digit1a < 58; digit1a++)
	{
		for (digit1b = 48; digit1b < 58; digit1b++)
		{
			for (digit2a = digit1a; digit2a < 58; digit2a++)
			{
				for (digit2b = 48; digit2b < 58; digit2b++)
				{
					if ((digit2b == digit1b) && (digit1a == digit2a))
					{
						continue;
					} else if ((digit2b == digit1a) && (digit2a == digit1b))
					{
					} else
					{
						putchar(digit1a);
						putchar(digit1b);
						putchar(' ');
						putchar(digit2a);
						putchar(digit2b);
						if ((digit1a == 57 && digit1b == 56) && (digit2a == 57 && digit2b == 57))
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
		}
	}
	putchar('\n');
	return (0);
}
