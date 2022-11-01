#include "main.h"

/**
 * create_file - Create file
 * @filename: Name of file
 * @text_content: Content written in file
 *
 * Return: 1 if success or -1 if fails
 */

int create_file(const char *filename, char *text_content)
{
	int fb, new_l, read_w;

	if (!filename)
		return (-1);

	fb = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (!fb)
		return (-1);

	if (text_content == NULL)
		text_content = "";

	for (new_l = 0; text_content[new_l]; new_l++)
		;

	read_w = write(fb, text_content, new_l);
	if (read_w == -1)
		return (-1);

	close(fb);
	return (1);
}
