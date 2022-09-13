#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	/*
	 * since Strings have a length
	 * initial the length so we may loop through it
	 * this will allow us to display the characters as a string
	 * and not as an array
	 */
	int count, length_string = strlen(string);

	/*loop through until the string is displayed */
	for (count = 0; count <= length_string; count++)
		putchar(string(length_string));

	return (0);
}
