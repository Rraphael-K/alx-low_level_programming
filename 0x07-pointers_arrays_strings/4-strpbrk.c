#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - Seach a string for sets of bytes
 * @s: String Input
 * @aceept: Location of char in string - S
 *
 * Return: Null or pointer to bytes in s
 */

char *_strpbrk(char *s, char *accept)
{
	char *strt = accept;

	while (*s)
	{
		while (*accept)
		{
			if (*accept == *s)
				return (s);
			accept++;
		}
		accept = strt;
		s++;
	}
	return (NULL);
}
