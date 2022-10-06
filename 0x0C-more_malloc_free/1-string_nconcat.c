#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - Function that concats two strings
 * @s1: First string Input pointer
 * s2: Second String Input pointer
 *
 * Return: Pointer to concat'ed strings or NULL
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *string;
	unsigned int counter = 0. lens1 = 0. lens2 = 0;

	if (s1 == NULL)
		s1 = "";
	while (s1[lens1])
		lens1++;

	if (s2 == NULL)
		s2 = "";
	while (s2[lens2])
		lens2++;
	if (n >= lens2)
		n = lens2;
	
	string = malloc(lens1 + n + 1);
	if (string == NULL)
		return (NULL);

	for (; count < (lens1 + n); count++)
	{
		if (count < lens1)
			string[count] = *s1, s1++;
		else
			string[count] = *s2, s2++;
	}
	string[count] = '\0';
	return (string);
}
