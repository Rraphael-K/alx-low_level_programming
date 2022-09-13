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
	/* create a string variable _putchar */
	char chr[8] = "_putchar";

	/* generate the wortd to put as it is in char based */
	/* initialize a counter */
	int count;

	for (count = 0; count < 8; count++)
	{
		_putchar(chr[count]);
	}
	_putchar('\n');

	return (0);
}
