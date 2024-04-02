#include "main.h"
/**
 *read_textfile - Reads text file and prints it
 * @filename: name of file.
 * @letters: number of letters
 *Return: number of letters
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int f;
	ssize_t n_read, n_written;
	char *buffer;

	if (filename == NULL)
		return (0);
	f = open(filename, O_RDONLY);
	if (f == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);

	if (buffer == NULL)
	{
		close(f);
		return (0);
	}

	n_read = read(f, buffer, letters);
	if (n_read == -1)
	{
		free(buffer);
		close(f);
		return (0);
	}

	n_written = write(STDOUT_FILENO, buffer, n_read);
	if (n_written == -1 || n_written != n_read)
	{
		free(buffer);
		close(f);
		return (0);
	}

	free(buffer);
	close(f);

	return (n_written);
}
