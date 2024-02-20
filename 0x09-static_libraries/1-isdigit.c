#include "main.h"

/**
 * _isdigit - checks if a character is a digit
 * @c: character
 * Return: 1 if c is a digit, else 0
 */
int _isdigit(int c)
{
	if ((c > 64 && c < 91) || (c > 96 && c < 123))
	{
		return (1);
	}
	return (0);
}
