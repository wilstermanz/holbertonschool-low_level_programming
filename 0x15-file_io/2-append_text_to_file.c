#include "main.h"

/**
 * append_text_to_file - Appends text to end of file
 * @filename: name of file to append to
 * @text_content: string to append to filename
 * Return: 1 for success, -1 for failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int file, wr, size = 0;

	if (filename == NULL)
		return (EXIT_FAILURE);

	if (text_content == NULL)
		text_content = "";

	file = open(filename, O_WRONLY | O_APPEND);
	if (file == -1)
		return (EXIT_FAILURE);

	while (text_content[size])
		size++;

	wr = write(file, text_content, size);
	if (wr == -1)
		return (EXIT_FAILURE);

	close(file);
	return (1);
}
