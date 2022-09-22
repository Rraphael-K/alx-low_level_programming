#include "main.h"
/**
 * string_toupper - Change lowercase to uppercase
 * @str: Pointer to string array
 * Return: String pointer
 */

char *string_toupper(char *str)
{
	/* temp storage of characters-string */
	char *str;
	char *sos = s;

	while (*str)
	{
		if (*str > 'a' && *str <= 'z')
			*str -= 32;
		str++
	}
	return (sos);
}
