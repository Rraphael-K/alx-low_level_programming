#include "main.h"
/**
 * base10 - Power in Base 10
 * @n: Exponent
 * Return: Power Exponent
 */

int base10(int n)
{
	int base = 10;

	while (n > 0)
	{
		base *= 10;
		n--;
	}
	return (base);
}
/**
 * print_number - print integers
 * @n: Print integer
 * Return: Void
 */

void print_number(int n)
{
	int p;
	p = base10(8);

	if (n < 0)
	{
		_putchar('-');
		n *= -1;
	}

	if (n == 0)
		_putchar('0');
	else
	{
		while (n / p == 0)
			p /= 10;

		while (p >= 1)
		{
			_putchar((n / p) + '0');
			n %= p;
			p /= 10;
		}
	}
}
