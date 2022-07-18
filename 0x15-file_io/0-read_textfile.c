#include "main.h"

/**
 * read_textfile - Reads a text file and prints to the standard output
 * @filename: name of file to read
 * @letters: Number of letters to read and print
 * Return: Actual numbers of letters read and printed, or 0 if failure
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int file;
	size_t count;
	char *buff = malloc(letters * sizeof(buff) + 1);

	if (buff == NULL || filename == NULL)
	{
		free(buff);
		return (0);
	}

	count = 0;
	while (count <= letters)
	{
		buff[count] = '\0';
		count++;
	}

	file = open(filename, O_RDONLY);

	if (file == -1)
		return (0);

	read(file, buff, letters);

	count = 0;
	while (buff[count] != '\0')
		count++;

	write(STDOUT_FILENO, buff, count);

	return (count);
}
