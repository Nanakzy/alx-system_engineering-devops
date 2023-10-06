#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: The name of the file to read
 * @letters: The number of letters it should read and print
 * Return: number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t file_descriptor;
	ssize_t written;
	ssize_t text;

	file_descriptor = open(filename, O_RDONLY);

	if (file_descriptor == -1)
	{
		return (0);
	}
	buffer = malloc(sizeof(char) * letters);

	if (buffer == NULL)
	{
		close(file_descriptor);
		return (0);
	}

	text = read(file_descriptor, buffer, letters);

	if (text == -1)
	{
		free(buffer);
		close(file_descriptor);
		return (0);
	}

	written = write(STDOUT_FILENO, buffer, text);

	free(buffer);
	close(file_descriptor);
	return (written);
}
