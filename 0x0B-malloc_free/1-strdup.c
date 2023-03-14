#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str: given string
 * Return: pointer to string
 */
char *_strdup(char *str)
{
	int i, lenstr;
	char *buffer;

	if (str == NULL)
		return (NULL);

	lenstr = strlen(str);

	buffer = malloc(sizeof(char) * (lenstr + 1));

	if (buffer == NULL)
		return (NULL);

	for (i = 0; i < lenstr; i++)
	{
		buffer[i] = str[i];
	}
	buffer[i] = '\0';

	return (buffer);
}
