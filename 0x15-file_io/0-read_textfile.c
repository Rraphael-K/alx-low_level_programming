#include "main.h"

/**
 * read_textfile - Reads a text file, prints to POSIX stdout
 * @filename: Name of file to read
 * @letters: Number of letters to read and print
 *
 * Return: Number of letters
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	size_t read_l, write_l;
	int fb;
	char *buffer;

	if (filename == NULL)
		return (0);

	fb = open(filename, O_RDONLY);
	if (fb == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		close(fb);
		return (0);
	}

	read_l = read(fb, buffer, letters);
	close(fb);
	if (read_l == -1)
	{
		free(buffer);
		return (0);
	}

	write_l = write(STDOUT_FILENO, buffer, read_l);
	free(buffer);
	if (read_l != write_l)
		return (0);

	return (write_l);
}
