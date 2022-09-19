#include "main.h"

/**
 * print_rev - Print the string in reverse
 * @s: String Input
 *
 * Return: Nothing
 */

void print_rev(char *s)
{
	char *length = s;

	while (*length)
		length++;
	length -= 1;

	while (length)
	{
		putchar(*s);
		length--;
	}

	putchar('\n');
}
