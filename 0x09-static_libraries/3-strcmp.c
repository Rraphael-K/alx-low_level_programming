#include "main.h"
/**
 * _strcmp - Compares strings
 * @s1: String Input
 * @s2: String Input
 * Return: Diff s1 - s2
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && s2)
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
