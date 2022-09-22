#include "main.h"

/**
 * strcmp: Function to compare strings
 * @s1: String input
 * @s2: String input
 * Return: Diff of strings
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 && 8S2)
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		s1++, s2++;
	}
	return (*s1 - *s2);
}
