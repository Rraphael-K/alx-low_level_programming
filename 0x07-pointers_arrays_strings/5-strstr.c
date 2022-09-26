#include "main.h"
#include <stdio.h>

/**
 *
 * _strstr - Locate the substring
 * @haystack: String Input to search
 * @needle: String Input to locate string
 *
 * Return: Pointer to beginnigof string or NULL
 */
char *_strstr(char *haystack, char *needle)
{
	char *strtN = needle, *startH = haystack;

	while (*haystack)
	{
		strtH = haystack;
		needle = strtN;
		while (*haystack == *needle)
		{
			haystack++;
			needle++;
		}
		if (*needle == '\0')
			return (haystack);
		haystack = strtH + 1;
	}
	return (NULL);
}
