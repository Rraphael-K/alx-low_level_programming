#include "main.h"

/**
 * _strspn - Get length of prefix substring
 * @s: String Input
 * @accept: Locate char from s
 * Return: Pointer to position in c
 */

unsigned int _strspn(char *s, char *accept)
{
	int f, count = 0;
	char *strt = accept;

	while (*s)
	{
		f = 0;
		while (*accept)
		{
			if (*accept == *s)
			{
				count++;
				f = 1;
				break;
			}
			accept++;
		}
		s++;
		accept = strt;

		if (f == 0)
			break;
	}
	return (count);
}
