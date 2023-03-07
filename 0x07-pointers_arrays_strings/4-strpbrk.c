#include "main.h"

/**
 * _strpbrk - searches a string for a set of bytes
 * @s: string
 * @accept: substring
 * Return: return s if it matches accept, 0 if not
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	i = 0;

	while (s[i] != '\0')
	{
		j = 0;

		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				return (s + i);
			}
			j++;
		}

		i++;
	}
	return (0);
}
