#include "main.h"
#include <stdio.h>

/**
 * _strcpy - Copy the string pointed to by src,
 * terminating null byte (\0)
 *
 * @dest: Points to destinastion of string
 * @src: Points to source string to copy from
 * Return: Pointer dest
 */

char *_strcpy(char *dest, char *src)
{
	char *holder = dest;

	while (*src)
		*dest++ = *src++;

	return (holder);
}
