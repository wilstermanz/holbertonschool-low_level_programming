#include "main.h"

/**
 * main - Copies a file into another
 * @argc: count of arguments
 * @argv: Pointer to array of args
 * Return: 0 on success
 */

int main(int argc, char **argv)
{
	char *file_from = argv[1], *file_to = argv[2];
	int from_fd, to_fd;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	from_fd = open(file_from, O_RDONLY);
	if (from_fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}

	to_fd = open(file_to, O_WRONLY | O_CREAT | O_TRUNC | O_APPEND, 0664);
	if (to_fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
		exit(99);
	}

	reader_writer(file_from, from_fd, file_to, to_fd);

	closer(from_fd, to_fd);
	return (0);
}

/**
 * reader_writer - Reads from one file and writes to another
 * file_from: name of file to read from
 * from_fd: file descriptor of from file
 * file_to: name of file to write to
 * to_fd: file descriptor of to file
 * Return: void
 */

void reader_writer(char *file_from, int from_fd, char *file_to, int to_fd)
{
	int rd, wr;
	char buffer[1024];
	
	rd = 1024;
	while (rd == 1024)
	{
		rd = read(from_fd, buffer, 1024);
		if (rd == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
			exit(98);
		}

		wr = write(to_fd, buffer, rd);
		if (wr == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
			exit(99);
		}
	}
}

/**
 * closer - closes open files
 * @file_from: first file to close
 * @file_to: second file to close
 * Return: void
 */

void closer(int file_from, int file_to)
{
	int error;

	error = close(file_from);
	if (error == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}
	error = close(file_to);
	if (error == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_to);
		exit(100);
	}
}
