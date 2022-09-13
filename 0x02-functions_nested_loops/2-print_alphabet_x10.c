#include "main.h"
/**
 * print_alphabet_x10 - See below
 *
 * Description: Print the alphabet ten times
 *
 * Return: Nothing (Void)
 */

void print_alphabet_x10(void)
{
	char chr;
	int times_ten = 10;

	while (times_ten != 0)
	{
		for (chr = 'a'; chr <= 'z'; chr++)
			_putchar(chr);
		_putchar('\n');
		times_ten--;
	}

}

	
