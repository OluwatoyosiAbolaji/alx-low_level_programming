#include "main.h"
#include <string.h>

/**
 * puts_half - prints half of a string, followed by a new line
 * @str: string to be printed
 */
void puts_half(char *str)
{
	int i, n, length;

	length = strlen(str);

	if (length % 2 == 0)
	{
		n = length / 2;
	} else
	{
		n = (length + 1) / 2;
	}

	for (i = n; str[i]; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
