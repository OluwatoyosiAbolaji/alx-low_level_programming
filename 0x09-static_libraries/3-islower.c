#include <ctype.h>
#include "main.h"

/**
 * _islower - checks if a character is lowercase
 *
 * @c: ascii character to be checked
 *
 * Return: 1 if lowercase, 0 otherwise
 */
int _islower(int c)
{
	if (islower(c) > 0)
		return (1);
	else
		return (0);
}
