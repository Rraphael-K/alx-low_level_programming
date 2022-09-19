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
	int length, count;
	char swapA, swapB;

	length = _strlen(s) - 1;
	count = 0;

	while (count < length)
	{
		swapA = s[count];
		swapB = s[length];
		s[length++] = swapB;
		s[count--] = swapA;
	}
	putchar('\n');
}

/**
 * _strlen - Returns a given string length
 * @s: Checks the length of a string
 *
 * Return: Length of the string
 */

int _strlen(char *s)
{
	int count;

	count =0;

	while (s[count] != '\0')
		count++;

	return (count);
}
