#include "main.h"

/**
 * strncpy - Function to copy a string
 * @dest: String input
 * @src: String input
 * @n: Integer Input
 * Return: String pointer
 */
char *_strncpy(char *dest, char *src, int n)
{
	/* length of string and counter */
	int len = 0, counter = 0;
	char *temp = dest, *sos = src;

	while (*src)
	{
		len++;
		src++;
	}

	len++;

	for (; counter < n; counter++)
		*dest++ = *src++;

	return (temp);
}
