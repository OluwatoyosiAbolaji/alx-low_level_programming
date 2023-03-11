#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: argc
 * @argv: argv
 * Return: 0 (success), 1 (error)
 */
int main(int argc, char *argv[])
{
	int total, num1, num2;

	if (argc == 3)
	{
		num1 = atoi(argv[1]);
		num2 = atoi(argv[2]);
		total = num1 * num2;

		printf("%d\n", total);
	} else if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	return (0);
}
