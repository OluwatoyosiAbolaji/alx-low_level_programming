#include "main.h"

/**
 * main - copies the content of a file to another file
 * @ac: argument count
 * @av: arguments
 * Return: 1 on success, -1 on failure
 */
int main(int ac, char *av[])
{
	int file_from, file_to, readfile_from, writefile_to;
	char buffer[1024];

	if (ac != 3)
		dprintf(STDERR_FILENO, "Usage: %s file_from file_to\n", av[0]), exit(97);
	file_from = open(av[1], O_RDONLY);
	if (file_from  == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]), exit(98);
	file_to = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (file_to == -1)
	{
		close(file_from);
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]), exit(99);
	}
	do {
		readfile_from = read(file_from, buffer, 1024);
		if (readfile_from == -1)
		{
			close(file_from), close(file_to);
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]), exit(98);
		}
		writefile_to = write(file_to, buffer, readfile_from);
		if (writefile_to == -1 || writefile_to != readfile_from)
		{
			close(file_from), close(file_to);
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]), exit(99);
		}
	} while (readfile_from == 1024);
	file_from = close(file_from);
	if (file_from < 0)
	{
		close(file_to);
		dprintf(STDERR_FILENO, "Can't close fd %s\n", av[1]), exit(100);
	}
	file_to = close(file_to);
	if (file_to < 0)
		dprintf(STDERR_FILENO, "Can't close fd %s\n", av[2]), exit(100);
	return (0);
}
