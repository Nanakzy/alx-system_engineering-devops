#include "main.h"

/**
 * create_file - Creates a file
 * @filename: pointer to name of file to be created
 * @text_content: pointer to string to write to file
 * Return: 1 on success otherwise -1
 */
int create_file(const char *filename, char *text_content)
{
	ssize_t text_length = 0;
	int file_descriptor;
	ssize_t bytes_written;

	if (filename == NULL)
		return (-1);

	file_descriptor = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);

	if (file_descriptor == -1)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[text_length] != '\0')
			text_length++;
	}

	bytes_written = write(file_descriptor, text_content, text_length);

	close(file_descriptor);

	if (bytes_written == -1)
	{
		return (-1);
	}

	else
	{
		close(file_descriptor);
	}
	return (1);
}
