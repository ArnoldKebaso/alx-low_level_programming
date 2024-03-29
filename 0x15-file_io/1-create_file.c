#include "main.h"

/**
 * create_file - Creates a file.
 * @filename: pointer to the name of the file to create.
 * @text_content: A pointer to a string to write to the file.
 *
 * Return: NULL -1 if the function fails
 *         Otherwise Success - 1.
 */
int create_file(const char *filename, char *text_content)
{
	int a, c, i = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (i = 0; text_content[i];)
			i++;
	}

	a = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	c = write(a, text_content, i);

	if (a == -1 || c == -1)
		return (-1);

	close(a);

	return (1);
}
