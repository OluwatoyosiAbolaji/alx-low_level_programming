#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments of your program
 * @ac: argument count
 * @av: arguments
 * Return: new string
 */
char *argstostr(int ac, char **av)
{
	int i, j, k = 0, len = 0;
	char *buffer;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			len++;
		}
	}
	len += ac;

	buffer = malloc(sizeof(char) * (len + 1));
	if (buffer == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			buffer[k] = av[i][j];
			k++;
		}
		buffer[k] = '\n';
		k++;
	}
	buffer[k] = '\0';

	return (buffer);
}
