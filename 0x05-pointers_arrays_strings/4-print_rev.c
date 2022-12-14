#include "main.h"
#include <stdio.h>

/**
 * print_rev - Print the string in reverse
 * @s: String Input
 *
 * Return: Nothing
 */

void print_rev(char *s)
{
	int length = 0;

	while (s[length] != '\0')
		length++;

	while (length)
		putchar(s[--length]);

	putchar('\n');
}
