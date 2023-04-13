#include "main.h"
#define BUFF_SIZE 1024
/**
  *main - entry point of the program
  *@argc: number of arguments
  *@argv: array of strings
  *
  *Return: 0 on success
  */
int main(int argc, char **argv)
{
	int file1, file2, i, j, k;
	char buffer[BUFF_SIZE];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	file1 = open(argv[1], O_RDONLY);
	if (file1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	file2 = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	while ((j = read(file1, buffer, BUFF_SIZE)) > 0)
	{
		k = write(file2, buffer, j);
		if (k != j)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	}
	if (j == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s", argv[1]);
		exit(98);
	}
	i = close(file1);
	if (i == -1)
		dprintf(STDERR_FILENO, "Error: Can't close %d\n", i);
	j = close(file2);
	if (j == -1)
		dprintf(STDERR_FILENO, "Error: Can't close %d\n", j);
	return (0);
}
