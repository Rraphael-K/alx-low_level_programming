#include "main.h"

/**
 * _isdigit - Check for a digit
 * @c: Input of Integer
 * Return: 1 if c is digit or 0 if not
 */

int _isdigit(int c)
{
	char a = '0';
	int digit = 0;

	for (; a <= '9'; a++)
	{
		if (a == c)
		{
			digit = 1;
			/* break out of loop */
			break;
		}
	}
	return (digit);
}
