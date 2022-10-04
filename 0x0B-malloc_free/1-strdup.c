#include "main.h"
#include <stdlib.h>
/**
 * _strdup - Return pointer to allocated memory
 * which contains a copy of the string
 * @str: Input pointer of string copy
 * Return: New string or NULL
 */
char *_strdup(char *str)
{
	char *new_str, *init;
	int count = 0, len = 0;

	if (str == NULL)
		return (NULL);

	init = str;

	while (*str)
	{
		len++;
		str++;
	}

	str = init;
	new_str = malloc(sizeof(char) * (len + 1));
	init = new_str;

	if (new_str != NULL)
	{
		for (; count < len; count++)
		{
			new_str[count] = *str;
			str++;
		}
		new_str[count] = '\0';
		return (init);
	}
	else
		return (NULL);
}
