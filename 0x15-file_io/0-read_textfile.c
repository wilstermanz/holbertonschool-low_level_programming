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
	char *buff = malloc(letters * sizeof(buff));

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
	if (buff[0] == '\0')
		return (0);

	count = 0;
	while (buff[count] && count <= letters)
		count++;

	write(STDOUT_FILENO, buff, count);

	free(buff);

	return (count);
}
