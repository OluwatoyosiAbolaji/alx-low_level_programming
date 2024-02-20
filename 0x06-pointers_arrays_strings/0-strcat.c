#include "main.h"

/**
 * _strcat - concatenates 2 strings
 * @dest: pointer to string 1
 * @src: pointer to string 2
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int i, j;

	/* get length of dest */
	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}

	/* iterate through src and add each element to dest */
	j = 0;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';

	return (dest);
}
