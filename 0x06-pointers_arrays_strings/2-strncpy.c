#include "main.h"

/**
 * _strncpy - copies a string
 * @dest: destination string
 * @src: source string
 * @n: number of characters to be copied
 * Return: Dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	/* declare variable */
	int i;

	/* iterate throught string till null byte */
	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		/* copy string */
		dest[i] = src[i];
	}

	/* iterate through string after null byte */
	for (; i < n; i++)
	{
		/* add null byte */
		dest[i] = '\0';
	}

	return (dest);
}
