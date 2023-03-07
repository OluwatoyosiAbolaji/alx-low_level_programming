#include "main.h"

/**
 * _strstr - locates a substring
 * @haystack: string
 * @needle: substring
 * Return: haystack if substring in haystack, else 0
 */
char *_strstr(char *haystack, char *needle)
{
	char *str1, *str2; /*Declaring pointer variables*/

	/* iterate through haystack */
	while (*haystack != '\0')
	{
		/* set str1 to haystack */
		str1 = haystack;
		str2 = needle;

		/* iterate through needle */
		while (*str2 != '\0' && *haystack == *str2)
		{
			/* increment haystack and needle */
			haystack++;
			str2++;
		}

		if (*str2 == '\0')
		{
			return (str1);
		}
		haystack = str1 + 1;
	}
	return (0);
}
