#include "main.h"
#include <stdio.h>

/**
 * _puts: Prints a string
 * followed by a new line
 * @str: String Input
 *
 * Return: Nothing
 */

void _puts(char *str)
{
	int count = 0;

	while (str[count] != '\0')
	{
		putchar(str[count]);
		count++;
	}
	putchar('\n');
}

