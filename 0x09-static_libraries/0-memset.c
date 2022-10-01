#include "main.h"

/**
 * _memset - Fills in memory with constant bytes
 * @s: Location to be filled
 * @b: Char to fill location
 * @n: Num of Bytes to be filled
 *
 * Return: Pointer to location
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *strt = s;

	while (n--)
	{
		*s = b;
		s++;
	}
	return (strt);
}
