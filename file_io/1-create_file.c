#include "main.h"

/**
 * create_file - creates a file
 * @filename: name of file to create
 * @text_content: NULL terminated string to write to file
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int w, o, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NUll)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	o = open(filename,  O_CRATE | O_RDWR | O_TRUNC, 0600);
	w = write(o, text_content, len);

	if (w == -1 || o == -1)
		return (-1);

	close(o);
	return (1);
}
