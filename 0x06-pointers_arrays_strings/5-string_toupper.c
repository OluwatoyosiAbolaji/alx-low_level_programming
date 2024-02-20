#include "main.h"

/**
 * _islower - checks if a string is lowercase
 * @a: string
 * Return: True or False
 */
char _islower(char a)
{
	int i = a;

	return (i > 96 && i < 123);
}

/**
 * string_toupper - changes a string to uppercacse
 * @str: pointer to string
 * Return: str
 */
char *string_toupper(char *str)
{
	int i, j, len;

	/* get length of string */
	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}

	for (i = 0; i < len; i++)
	{
		if (_islower(str[i]))
		{
			j = str[i];

			str[i] = j - 32;
		}
	}
	return (str);
}
