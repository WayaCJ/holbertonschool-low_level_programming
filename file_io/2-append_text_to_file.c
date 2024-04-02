#include "main.h"
/**
 * append_text_to_file - Appends text.
 * @filename: name of file.
 * @text_content:  NULL terminated string.
 * Return: result
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int f, status;
	ssize_t n_written;

	if (!filename)
		return (-1);

	f = open(filename, O_APPEND | O_WRONLY);

	if (f == -1)
		return (-1);

	if (text_content)
	{
		for (n_written = 0; text_content[n_written]; n_written++)

		status = write(f, text_content, n_written);

		if (status == -1)
		{
			close(f);
			return (-1);
		}
	}

	close(f);
	return (1);
}
