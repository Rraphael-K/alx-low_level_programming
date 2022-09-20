#include "main.h"
#include <stdio.h>

/**
 * puts_half -  Prints half the string with a new line
 * @str: String Input
 *
 * Return: nothing
 */
void puts_half(char *str)
{
	int length = 0, count, nHalf;

	while (str[length] != '\0')
		length++;

	if (length % 2 == 0)
		nHalf = length / 2;
	else
		nHalf = (length + 1) / 2;

	for (count = nHalf; count < length; count++)
		putchar(str[count]);
	putchar('\n');
}
