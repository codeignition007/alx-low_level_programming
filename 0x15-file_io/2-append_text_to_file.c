#include "main.h"

/**
 * append_text_to_file - Appends text to a file.
 * @filename: Pointer to the name of appended file.
 * @text_content: Pointer of string to include to the end of the file.
 *
 * Return: When function fails or filename is NULL, prints  - -1.
 *         No existence of file or the user lacks write permissions - -1.
 *         Otherwise - 1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int o, w, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	o = open(filename, O_WRONLY | O_APPEND);
	w = write(o, text_content, len);

	if (o == -1 || w == -1)
		return (-1);

	close(o);

	return (1);
}

