#include "main.h"
#include <stdio.h>
/**
 * _strchr - Locate string character
 * @s: String input
 * @c: Input char to locate string - s
 *
 * Return: Pointer to c Position
 */

char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (c == *s)
			return (s);
		s++;
	}
	
	if (c == *s)
		return (s);
	return (NULL);
}
