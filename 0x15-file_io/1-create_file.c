#include "main.h"

/**
 * create_file - creates a file
 * @filename: name of file to create
 * @text_content: string to add to file
 * Return: 1 on success, -1 for failure
 */

int create_file(const char *filename, char *text_content)
{
	int file, wr, size;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
		text_content = "";

	file = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (file == -1)
		return (-1);

	for (size = 0; text_content[size]; size++)
	{}

	wr = write(file, text_content, size);
	if (wr == -1)
		return (-1);

	close(file);
	return (1);
}
