#include "main.h"

/**
 * _memcpy - copies memory area
 * @dest: destination string
 * @src: source string
 * @n: number of strings to be copied
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	/* declare variables */
	unsigned int i;

	/* iterate through src till n number of characters and copy to dest */
	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
