#include "main.h"
#include <stdlib.h>

/**
 * _realloc - reallocates memory using malloc and free
 * @ptr: pointer to previously allocated memory
 * @old_size: size of ptr
 * @new_size: new size to be allocated to ptr
 * Return: buffer
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i, max = new_size;
	char *buffer, *clone;

	if (ptr == NULL)
	{
		buffer = malloc(new_size);
		return (buffer);
	}
	else if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	else if (new_size == old_size)
	{
		return (ptr);
	}
	else
	{
		clone = ptr;
	}

	buffer = malloc(new_size);
	if (buffer == NULL)
		return (NULL);

	if (new_size > old_size)
		max = old_size;

	for (i = 0; i < max; i++)
	{
		buffer[i] = clone[i];
	}

	free(ptr);

	return (buffer);
}
