#include "main.h"

/**
 * binary_to_unit - Convert binary num to usigned int
 * @b: Binary
 *
 * Return: Unsigned int
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int unsigned_int = 0;
	int len, base;

	if (b == NULL)
	{
		return (0);
	}

	for (len = 0; b[len] != '\0'; len++)
		;

	for (len--, base = 1; len >= 0; base *= 2)
	{
		if (b[len] != '0' && b[len] != '1')
			return (0);

		if (b[len] & 1)
			unsigned_int += base;
	}
	return (unsigned_int);
}
