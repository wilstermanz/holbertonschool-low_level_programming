#include "main.h"

/**
 * read_textfile - Reads a text file and prints to the standard output
 * @filename: name of file to read
 * @letters: Number of letters to read and print
 * Return: Actual numbers of letters read and printed, or 0 if failure
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int file, rd, wr;
	char *buff;

	if (filename == NULL)
		return (0);

	file = open(filename, O_RDONLY);

	if (file == -1)
		return (0);

	buff = malloc(letters * sizeof(*buff) + 1);
	if (buff == NULL)
		return (0);

	rd = read(file, buff, letters);
	if (rd == -1)
		return (0);

	wr = write(STDOUT_FILENO, buff, rd);
	if (wr == -1)
		return (0);

	close(file);
	free(buff);

	return (wr);
}
