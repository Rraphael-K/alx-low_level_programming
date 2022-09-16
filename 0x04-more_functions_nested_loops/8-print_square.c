#include "main.h"

/**
 * print_square - Prints a square
 * @size: Integer input
 *
 * Return: 0
 */

void print_square(void)
{
	int a, b;

	if (size > 0)
	{
		for (a = 0; a < size; a++)
		{
			for (b = 0; b < size; b++)
				_putchar('#');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
