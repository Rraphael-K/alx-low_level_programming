#include "main.h"
#include <stdio.h>

/**
 * _isupper - Determine if letter is Uppercasei
 *
 * @c: Main input
 *
 * Description: Alphabet checking
 *
 * Return: 1 if upper and 0 if not
 */

int _isupper(int c)
{
	char upper = 'A';
	int isUpper = 0;

	for (; upper <= 'Z'; upper++)
	{
		if (c == upper)
		{
			isUpper = 1;
			break;
		}
	}
	return (isUpper);
}
