#include "main.h"
/**
 * print_sign - Display the sign of the number
 * @n: user input
 *
 * Return: 1 if greater than 0, 0 if 0 else -1
 */
int print_sign(int n)
{
	/* value to be returned */
	int num;

	if (n > 0)
	{
		num = 1;
		_putchar('+');
	} else if (n == 0)
	{
		num = 0;
		_putchar('0');
	} else
	{
		num = -1;
		_putchar('-');
	}
	return (num);
}
