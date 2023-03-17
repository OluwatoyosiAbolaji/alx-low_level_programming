#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _calloc - allocates memory for an array
 * @nmemb: number of elements in the array
 * @size: size of each element in the array
 * Return: pointer to array
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *buffer;

	if (nmemb == 0 || size == 0)
		return (NULL);

	buffer = malloc(nmemb * size);
	if (buffer == NULL)
		return (NULL);

	for (i = 0; i < (nmemb * size); i++)
	{
		buffer[i] = 0;
	}

	return (buffer);
}
