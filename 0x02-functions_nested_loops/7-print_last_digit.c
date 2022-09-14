#include "main.h"
/**
 * print_last_digit - Display the lastdigit of a number
 * @r: Int from user input from main file
 *
 * Return: r from input
 */
int print_last_digit(int r)
{
	/* declare last digit placeholder */
	int num;

	if (r < 0)
		num = -1 * (r % 10);
	else
		num = r % 10;

	_putchar((num % 10) + '0');
	return (num % 10);
}
