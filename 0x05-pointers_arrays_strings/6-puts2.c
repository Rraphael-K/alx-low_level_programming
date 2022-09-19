#include "main.h"
#include <stdio.h>

/**
 * puts2 - Prints characters as strings
 * followed by a new line
 * @str: String input
 *
 * Return: Nothing
 */

void puts2(char *str)
{
	int length = 0, count = 0;

	while (str[length] != '\0')
		length++;
	
	length -= 1;

	for (; count <= length; count += 2)
		putchar(str[count]);

	putchar('\n');
}
