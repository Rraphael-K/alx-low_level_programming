#include "main.h"
#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: alphabet creating
 *
 * Return: Nothing (Void)
 */
void print_alphabet(void)
{
	char chr;

	for (chr = 'a'; chr <= 'z'; chr++)
		_putchar(chr);
	_putchar('\n');
}
