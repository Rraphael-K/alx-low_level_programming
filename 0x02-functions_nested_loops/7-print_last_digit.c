#include "main.h"
/**
 * print_last_digit - Display the lastdigit of a number
 * @r: Int from user input from main file
 *
 * Return: r from input
 */
int print_last_digit(int r)
{
	_putchar(r % 10);
	return (r % 10);
}
