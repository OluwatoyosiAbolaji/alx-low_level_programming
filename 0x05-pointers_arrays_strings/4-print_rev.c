#include "main.h"
#include <string.h>

/**
 * print_rev - prints a string in reverse order
 * @s: string
 */
void print_rev(char *s)
{
	int i;

	i = strlen(s);

	for (i = i - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
