#include "main.h"

/**
 * leet - converts a string to 1337
 * @str: pointer string to be converted
 * Return: str
 */
char *leet(char *str)
{
	/* intialize variables */
	int count = 0, i;
	int lower_case[] = {97, 101, 111, 116, 108};
	int upper_case[] = {65, 69, 79, 84, 76};
	int numbers[] = {52, 51, 48, 55, 49};

	/* iterate throught the string till you encounter NULL byte */
	while (str[count] != '\0')
	{
		for (i = 0; i < 5; i++)
		{
			if (str[count] == lower_case[i] || str[count] == upper_case[i])
			{
				str[count] = numbers[i];
				break;
			}
		}
		count++;
	}

	return (str);
}
