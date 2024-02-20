#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _isdigit - checks if a string contains only digits
 * @str: string
 * Return: 1 (success)
 */
int _isdigit(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 48 || str[i] > 57)
		{
			printf("Error\n");
			exit(98);
		}
		i++;
	}
	return (1);
}

/**
 * main - multiplies two positive numbers
 * @argc: argument count
 * @argv: agument variables
 * Return: 0 (success)
 */
int main(int argc, char *argv[])
{
	unsigned long result;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}

	if (!_isdigit(argv[1]))
	{
		printf("Error\n");
		exit(98);
	}
	if (!_isdigit(argv[2]))
	{
		printf("Error\n");
		exit(98);
	}

	result = atol(argv[1]) * atol(argv[2]);

	printf("%lu\n", result);
	return (0);
}
