#include "main.h"
/**
 * create_file - Creates a file
 * @filename: name of file to create.
 * @text_content: NULL-terminated string.
 * Return: result
 */
int create_file(const char *filename, char *text_content)
{
	int f;
	ssize_t len = 0, written;

	if (!filename)
		return (-1);

	f = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (f == -1)
		return (-1);
	if (text_content)
	{
		while (text_content[len])
			len++;

		written = write(f, text_content, len);

		if (written != len)
		{
			close(f);
			return (-1);
		}
	}

	close(f);
	return (1);
}
