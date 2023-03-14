#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * Return: buffer
 */
char *str_concat(char *s1, char *s2)
{
	char *buffer;
	unsigned int i, j, lens1, lens2;

	if (s1)
		lens1 = strlen(s1);
	else
		s1 = "";

	if (s2)
		lens2 = strlen(s2);
	else
		s2 = "";

	buffer = malloc(sizeof(char) * (lens1 + lens2 + 1));
	if (buffer == NULL)
		return (NULL);

	i = 0;
	j = 0;
	while (s1[i] != '\0')
	{
		buffer[j] = s1[i];
		j++;
		i++;
	}
	i = 0;
	while (s2[i] != '\0')
	{
		buffer[j] = s2[i];
		j++;
		i++;
	}
	buffer[j] = '\0';
	return (buffer);
}
