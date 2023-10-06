#include "main.h"

/**
 * create_file - Creates a file
 * @filename: pointer to name of file to be created
 * @text_content: pointer to string to write to file
 * Return: 1 on success otherwise -1
 */
int create_file(const char *filename, char *text_content)
{
	int file_descriptor, rite, length = 0;


	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (length = 0; text_content[length]; length++)
			continue;
	}

	file_descriptor = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);

	if (file_descriptor == -1)
		return (-1);

	if (text_content != NULL)
	{
		rite = write(file_descriptor, text_content, length);

		if (rite == -1)
		{
			close(file_descriptor);
			return (-1);
		}
	}
	close(file_descriptor);
	return (1);
}
