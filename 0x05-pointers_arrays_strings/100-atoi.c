#include <stdio.h>

/**
 * _atoi - Convert string to integer
 * @s: String input
 *
 * Return: Integer from conversion
 */

int _atoi(char *s)
{
	int position = 1;
	unsigned int total = 0;
	char null_flag = 0;

	while (*s)
	{
		if (*s == '-')
			position *= -1;

		if (*s >= '0' && *s <= '9')
		{
			null_flag = 1;
			total = total * 10 + *s - '0';
		}
		else if (null_flag)
			break;
		s++;
	}

	if (position < 0)
		total = (-total);

	return (total);
}
