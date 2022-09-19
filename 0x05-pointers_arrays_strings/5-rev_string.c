#include "main.h"
#include <stdio.h>
/**
 * rev_string - Prints a string in revese
 * follwed by a new line
 * @s: Input string
 *
 * Return: Nothing
 */

void rev_string(char *s)
{
	int length = 0, count = 0;
	char swapA;

	while (s[length] != '\0')
		length++;

	while (count < length--)
	{
		swapA = s[count];
		s[count++] = s[length];
		s[length = swapA;
	}
	putchar('\n');
}
