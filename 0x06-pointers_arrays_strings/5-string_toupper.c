#include "main.h"
/**
 * string_toupper - Change lowercase to uppercase
 * Return: String pointer
 */

char *string_toupper(char *)
{
	/* temp storage of characters-string */
	char *s;
	char *sos = s;

	while (*s)
	{
		if (*s > 'a' && *s <= 'z')
			*s -= 32;
		s++
	}
	return (sos);
}
