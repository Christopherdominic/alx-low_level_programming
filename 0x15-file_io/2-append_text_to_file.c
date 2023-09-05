#include "main.h"

/**
 * append_text_to_file - Appends text to the file.
 * @filename: A pointer to the name of the file.
 * @text_content: string content to the file.
 *
 * Return: If the function fails or filename is NULL - -1.
 *         If the file does not exist the user doesnt have permissions - -1.
 *         Otherwise - 1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int o, w, length = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (length = 0; text_content[length];)
			length++;
	}

	o = open(filename, O_WRONLY | O_APPEND);
	w = write(o, text_content, length);

	if (o == -1 || w == -1)
		return (-1);

	close(o);

	return (1);
}

