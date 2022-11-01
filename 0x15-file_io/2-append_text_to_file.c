#include "main.h"
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>

/**
 * append_text_to_file - append text to end of file
 * @filename: File name
 * @text_content: Added content to file
 *
 * Return: 1 - file exists; -1 fail or no file
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fb, new_l, read_w;

	if (!filename)
		return (-1);

	fb = open(filename, O_WRONLY | O_APPEND);
	if (fb == -1)
		return (-1);
	if (text_content)
	{
		for (new_l = 0; text_content[new_l]; new_l++)
			;
		read_w = write(fb, text_content, new_l);

		if (read_w == -1)
			return (-1);
	}

	close(fb);
	return (1);
}
