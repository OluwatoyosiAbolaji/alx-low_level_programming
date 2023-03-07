#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: string
 * @accept: substring
 * Return: ret
 */
unsigned int _strspn(char *s, char *accept)
{
	/* declare variable */
	unsigned int i, j, ret;

	ret = 0;

	/* iterate through s to find accept */
	i = 0;
	while (s[i] != '\0')
	{
		/* iteerate through accept till there's a match */
		j = 0;
		while (accept[j] != '\0')
		{
			if (accept[j] == s[i])
			{
				ret++;
				break;
			}
			j++;
		}

		/* if there's no match, break */
		if (s[i] != accept[j])
		{
			break;
		}

		i++;
	}
	return (ret);
}
