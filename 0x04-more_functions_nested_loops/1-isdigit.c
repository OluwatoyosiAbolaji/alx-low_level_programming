#include "main.h"

/**
 * _isdigit - checks if a character is a digit
 * @c: character
 * Return: 1 if c is a digit, else 0
 */
int _isdigit(int c)
{
	if (isdigit(c))
	{
		return (1);
	}
	return (0);
}
