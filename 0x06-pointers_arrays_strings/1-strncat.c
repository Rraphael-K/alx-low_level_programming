#include "main.h"
/**
 * _strncat - Function concatenates two string
 * @dest: String input
 * @src: String input
 * @n: Integer input
 * Return: String pointer
 */

char *_strncat(char *dest, char *src, int n)
{
	int len = 0, count  0;
	char *temp = dest, *sos = src;

	while (*src)
	{
		len++;
		src++;
	}

	while (*dest)
		dest++;

	if (n > len)
		n = len;

	src = start;

	for (; count < n; count++)
		*dest++ = *src++;

	*dest = '\0';
	return (temp);
}
