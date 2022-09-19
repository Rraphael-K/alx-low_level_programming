#include "main.h"

/**
 * _strlen - Returns the length of a string
 * @s: String Input
 *
 * Return: Nothing
 */

int _strlen(char *s)
{
	int length = 0;

	while (s[length] != '\0')
		length++;

	return (length);
}
