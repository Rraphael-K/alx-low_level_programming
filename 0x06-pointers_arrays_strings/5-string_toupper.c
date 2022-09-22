#include "main.h"
/**
 * string_toupper - Change lowercase to uppercase
 * @s: Integer input
 * Return: String pointer
 */

char *string_toupper(char *s)
{
	/* temp storage of characters-string */
	char *sos = c;

	while (*s)
	{
		if (*s > 'a' && *s <= 'z')
			*s -= 32;
		s++
	}
	return (sos);
}
