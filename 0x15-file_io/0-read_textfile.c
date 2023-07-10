#include "main.h"
#define BUFF_MAX 1024
/**
  *read_textfile - reads a text file and prints in stdout
  *@filename: filename to be opened and read
  *@letters: number of letters to be read
  *Return: number of letters printed
  */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t file_no, result, j;
	size_t num_read;
	char buffer[BUFF_MAX];

	if (filename == NULL)
		return (0);
	file_no = open(filename, O_RDONLY);
	if (file_no == -1)
		return (0);
	num_read = read(file_no, buffer, letters);
	if (num_read == -1 || num_read != letters)
	{
		close(file_no);
		return (0);
	}
	result = write(1, buffer, num_read);
	j = num_read
	if (result == -1 || result != j)
	{
		close(file_no);
		return (0);
	}
	close(file_no);
	return (result);
}
