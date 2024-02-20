#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * check_num - check - string there are digit
 * @str: array str
 *
 * Return: 1 (Str is a digit)
 */
int check_num(char *str)
{
	/*Declaring variables*/
	unsigned int count;

	count = 0;
	while (count < strlen(str)) /*count string*/
	{
		if (!isdigit(str[count])) /*check if str there are digit*/
		{
			return (0);
		}

		count++;
	}
	return (1);
}

/**
 * main - Entry point
 * @argc: argc
 * @argv: argv
 * Return: 0 (success), 1 (error)
 */
int main(int argc, char *argv[])
{
	int i, sum, num;

	sum = 0;

	i = 1;
	while (i < argc)
	{
		if (check_num(argv[i]))
		{
			num = atoi(argv[i]);
			sum += num;
		} else
		{
			printf("Error\n");
			return (1);
		}

		i++;
	}

	printf("%d\n", sum);

	return (0);
}
