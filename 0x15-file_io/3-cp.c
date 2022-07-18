#include "main.h"

/**
 * main - Copies a file into another
 * @argc: count of arguments
 * @argv: Pointer to array of args
 * Return: 0 on success
 */

int main(int argc, char **argv)
{
	char *file_from = argv[1], *file_to = argv[2], buff[1024];
	int from_fd, to_fd, rd = 1024, wr;

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
	while (rd >= 1024)
	{
		rd = read(from_fd, buff, 1024);
		if (rd == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
			closer(from_fd, to_fd);
			exit(98);
		}
		wr = write(to_fd, buff, rd);
		if (wr == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
			closer(from_fd, to_fd);
			exit(98);
		}
	}
	closer(from_fd, to_fd);
	return (0);
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
