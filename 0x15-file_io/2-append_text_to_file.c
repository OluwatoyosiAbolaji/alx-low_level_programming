#include "main.h"

/**
 * append_text_to_file - appends a file
 * @filename: file to be appended
 * @text_content: text to be added at the end of file
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file, writes;
	int length = 0;

	/* check valid filename */
	if (filename == NULL)
		return (-1);

	/* open file and check success */
	file = open(filename, O_APPEND | O_RDWR, 0664);
	if (file == -1)
		return (-1);

	/* check text_content */
	if (!text_content)
	{
		close(file);
		return (1);
	}

	/* get length of text_content */
	while (text_content[length])
		length++;

	/* append file */
	writes = write(file, text_content, length);
	if (writes == -1)
		return (-1);

	close(file);
	return (1);
}

