#include "main.h"
/**
 * print_to_98 - Function
 * @n: To catch user input
 *
 * Return: Results of the calculation
 */
void print_to_98(int n)
{
	while (n <= 98)
		_putchar(n);
	_putchar(',');
	_putchar(' ');
	n++;
}
