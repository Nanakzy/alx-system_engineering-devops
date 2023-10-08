#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include "main.h"

#define BUFFER_SIZE 1024

int copy_file(int fd_from, const char *file_to);

/**
 * main - checks if number of arguments are correct
 * @argc: number of arguments
 * @argv: argument vector
 * Return: result
 */
int main(int argc, char *argv[])
{
	const char *file_from;
	const char *file_to;
	int result;
	int fd_from;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	file_from = argv[1];
	file_to = argv[2];

	fd_from = open(file_from, O_RDONLY);

	if (fd_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}

	result = copy_file(fd_from, file_to);


	if (result == 99)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", file_to);
	}
	else if (result == 100)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd 3\n");
		exit(100);
	}
	close(fd_from);
	return (0);
}

/**
 * copy_file - copies the content of a file to another file
 * @fd_from: file to be copied
 * @file_to: file to copy into
 *
 * Return: 0 success
 */
int copy_file(int fd_from, const char *file_to)
{
	int fd_to;
	char buffer[BUFFER_SIZE];
	ssize_t bytes_read;

	fd_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_to == -1)
	{
		return (99);
	}

	while ((bytes_read = read(fd_from, buffer, BUFFER_SIZE)) > 0)
	{
		if (write(fd_to, buffer, bytes_read) != bytes_read)
		{
			close(fd_from);
			close(fd_to);
			return (99);
		}
	}

	close(fd_to);
	return (0);
}
