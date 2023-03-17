#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - concatenates two strings.
 * @s1: string one
 * @s2: string two
 * @n: n bytes of s2 to be added
 * Return: pointer to new string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *buffer;
	unsigned int i, j, lens1, lens2;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	lens1 = strlen(s1);
	lens2 = strlen(s2);

	if (n >= lens2)
		n = lens2;

	buffer = malloc(sizeof(char) * (lens1 + n + 1));
	if (buffer == NULL)
		return (NULL);

	for (i = 0; i < lens1; i++)
	{
		buffer[i] = s1[i];
	}

	for (j = 0; j < n && (s2[j] != '\0'); j++, i++)
	{
		buffer[i] = s2[j];
	}
	buffer[i] = '\0';

	return (buffer);
}
