#include "main.h"

/**
 * _strncat - concatenates two strings
 * @dest: string 1
 * @src: string 2
 * @n: variable n
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	/* get the length of dest */
	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}

	/* add n characters of src to dest */
	j = 0;
	while (j < n && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	dest[i] = '\0';

	return (dest);
}
