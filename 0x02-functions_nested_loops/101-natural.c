#include <stdio.h>

/**
 * main - entry point
 *
 * Return: 0 (success)
 */
int main(void)
{
	int n = 1024, result = 0, i;

	for (i = 0; i <= n; i++)
		if (i % 3 == 0)
		{
			result += i;
		} else if (i % 5 == 0)
		{
			result += i;
		} else
		{
			continue;
		}
	printf("%d\n", result);
	return (0);
}
