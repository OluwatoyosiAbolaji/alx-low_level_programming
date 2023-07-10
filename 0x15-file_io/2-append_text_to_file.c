#include "main.h"
/**
  *append_text_to_file - appends text to a file
  *@filename: name of file to be appended
  *@text_content: string of chars to add
  *Return: 1 on success
  */
int append_text_to_file(const char *filename, char *text_content)
{
	int file_no, num_read, i;

	if (filename == NULL)
		return (-1);
	file_no = open(filename, O_APPEND | O_RDWR, 0664);
	if (file_no == -1)
		return (-1);
	if (text_content == NULL)
	{
		close(file_no);
		return (1);
	}
	for (i = 0; text_content[i];)
		i++;
	num_read = write(file_no, text_content, i);
	if (num_read == -1 || num_read != i)
	{
		close(file_no);
		return (-1);
	}
	close(file_no);
	return (1);
}
