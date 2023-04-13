#include "main.h"
/**
  *main - entry point of the program
  *@argc: number of arguments
  *@argv: array of strings
  *Return: 0 on success
  */
int main(int argc, char **argv)
{
	int file1, file2, i, j, k;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	file1 = open(argv[1], O_RDWR);
	j = read(file1, buffer, 1024);
	if (file1 == -1 || j == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	file2 = open(argv[2], O_RDWR | O_CREAT | O_TRUNC, 0664);
	k = write(file2, buffer, j);
	if (file2 == -1 || k == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	i = close(file1);
	if (i != 0)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", i);
	j = close(file2);
	if (j != 0)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", j);
	return (0);
}
