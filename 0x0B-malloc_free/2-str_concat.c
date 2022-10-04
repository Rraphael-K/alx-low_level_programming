#include "main.h"
#include <stdlib.h>
/**
 * str_concat - Concatenate two strings
 * @s1: String input
 * @s2: String input
 * Return: Concat Strings or NULL
 */
char *str_concat(char *s1, char *s2)
{
	char *new_str, *ss1, *ss2;
	int count = 0, len1 = 0, len2 =0;

	ss1 = s1;
	ss2 = s2;

	if (s1 == NULL)
		s1 = "";
	while (*s1)
	{
		len1++;
		s1++;
	}

	s1 = ss1;

	if (s2 == NULL)
		s2 = "";
	while (*s2)
	{
		len2++;
		s2++;
	}
	s2 = ss2;
	new_str = malloc(sizeof(char) * (len1 + len2 + 1));
	ss1 = new_str;

	for (; count < (len1 + len2); count++)
	{
		if (count < len1)
		{
			new_str[count] = *s1;
			s1++;
		}
		else
		{
			new_str[count] = *s2;
			s2++;
		}
	}
	new_str[count] = '\0';
	return (ss1);
}
