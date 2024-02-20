#include "main.h"
#include <string.h>

/**
 * puts2 - prints every other character of a string
 * @str: string
 */
void puts2(char *str)
{
	int i, length;

	length = strlen(str);

	for (i = 0; i < length; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
