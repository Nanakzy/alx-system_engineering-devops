#include "main.h"
#include <stdarg.h>

#define BUFFER_SIZE 1024

/**
 * error_message - Print an error message to the standard error
 * @code: The error code
 * @format: The format string for the error message
 * @...: Additional arguments for the format string
 */
void error_message(int code, const char *format, ...)
{
	va_list args;

	va_start(args, format);
	dprintf(STDERR_FILENO, format, args);
	va_end(args);
	exit(code);
}

/**
 * main - entry point
 * @argv: the vector
 * @argc: the number of arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	const char *file_from = argv[1];
	const char *file_to = argv[2];
	int source_fd, dest_fd, bytes_read, bytes_written;
	char buffer[BUFFER_SIZE];

	if (argc != 3)
	{
		error_message(97, "Usage: cp file_from file_to\n");
	}

	source_fd = open(file_from, O_RDONLY);

	if (source_fd == -1)
	{
		error_message(98, "Error: Can't read from file %s\n", file_from);
	}

	dest_fd = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0664);

	if (dest_fd == -1)
	{
		error_message(99, "Error: Can't write to file %s\n", file_to);
	}

	while ((bytes_read = read(source_fd, buffer, BUFFER_SIZE)) > 0)
	{
		bytes_written = write(dest_fd, buffer, bytes_read);

		if (bytes_written == -1)
		{
			error_message(99, "Error: Can't write to file %s\n", file_to);
		}
	}

	if (bytes_read == -1)
	{
		error_message(98, "Error: Can't read from file %s\n", file_from);
	}

	if (close(source_fd) == -1)
	{
		error_message(100, "Error: Can't close fd %d\n", source_fd);
	}

	if (close(dest_fd) == -1)
	{
		error_message(100, "Error: Can't close fd %d\n", dest_fd);
	}

	return (0);
}

