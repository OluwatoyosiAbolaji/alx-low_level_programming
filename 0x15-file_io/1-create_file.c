#include "main.h"
#define BUFF_MAX 1024
/**
  *create_file - creates a file and writes content in it
  *@filename: name of file to be created
  *@text_content: string of chars to be written
  *Return: 1 on success, -1 on failure
  */
int create_file(const char *filename, char *text_content)
{
	int file_no, i, j;

	if (filename == NULL)
		return (-1);
	file_no = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (file_no == -1)
		return (-1);
	for (i = 0; text_content[i];)
		i++;
	if (text_content == NULL)
	{
		close(file_no);
		return (1);
	}
	j = write(file_no, text_content, i);
	if (j == -1 || j != i)
	{
		close(file_no);
		return (-1);
	}
	file_no = close(file_no);
	if (file_no == -1)
		return (-1);
	return (1);
}
