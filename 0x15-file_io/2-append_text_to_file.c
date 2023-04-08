#include "main.h"

/**
 * append_text_to_file - Appends text at the end of a file.
 * @filename: pointer to the name of the file.
 * @text_content: The string to add to the end of the file.
 *
 * Return: -1 If the function fails or filename is NULL.
 *         If the file does not exist the user lacks write permissions - -1.
 *         Otherwise - 1 Sucess.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int a, c, i = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (i = 0; text_content[i];)
			i++;
	}

	a = open(filename, O_WRONLY | O_APPEND);
	c = write(a, text_content, i);

	if (a == -1 || c == -1)
		return (-1);

	close(a);

	return (1);
}
