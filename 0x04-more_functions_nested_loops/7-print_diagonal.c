#include "main.h"

/**
 * print_diagonal - draw diagonal line
 * @n: Integer input
 *
 * Return: 0
 */

void print_diagonal(int n)
{
	int a, b;

	if (n > 0)
	{
		for (a = 0; a < n; a++)
		{
			for (b = 0; b < a; b++)
				_putchar(' ');
		_putchar(17);
		_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
