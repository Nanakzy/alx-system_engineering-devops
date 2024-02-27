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
 * open_file - opens the fie
 * @flags: the flag to use
 * @filename: the name if the file
 * @mode: the type of mode
 * Return: opened file
 */
int open_file(const char *filename, int flags, int mode)
{
	int fd = open(filename, flags, mode);

	if (fd == -1)
	{
		error_message(99, "Error: Can't open file %s\n", filename);
	}

	return (fd);
}

/**
 * close_file - closes the file
 * @fd: the file descriptor
 * Return: void
 */
void close_file(int fd)
{
	if (close(fd) == -1)
	{
		error_message(100, "Error: Can't close fd %d\n", fd);
	}
}

/**
 * copy_file - copies the file
 * @source: the source file
 * @dest: the destination file
 * Return: dest
 */
void copy_file(const char *source, const char *dest)
{
	int source_fd = open_file(source, O_RDONLY, 0);
	int dest_fd = open_file(dest, O_WRONLY | O_CREAT | O_TRUNC, 0664);
	char buffer[BUFFER_SIZE];
	int bytes_read, bytes_written;

	mode_t old_umask = umask(0);

	umask(old_umask);

	while ((bytes_read = read(source_fd, buffer, BUFFER_SIZE)) > 0)
	{
		bytes_written = write(dest_fd, buffer, bytes_read);

		if (bytes_written == -1)
		{
			error_message(99, "Error: Can't write to file %s\n", dest);
		}
	}

	if (bytes_read == -1)
	{
		error_message(98, "Error: Can't read from file %s\n", source);
	}

	close_file(source_fd);
	close_file(dest_fd);
}

/**
 * main - entry point
 * @argc: number of arguments
 * @argv: the argument vector
 * Return: 0
 */
int main(int argc, char *argv[])
{
	const char *file_from = argv[1];
	const char *file_to = argv[2];

	if (argc != 3)
	{
		error_message(97, "Usage: cp file_from file_to\n");
	}

	copy_file(file_from, file_to);

	return (0);
}
