#include "main.h"
/**
 * rot13 - Encode string using rot13
 * @str: Input string
 * Return: String
 */

char *rot13(char *str)
{
	int count = 0;

	while (str[count] != '\0')
	{
		while ((str[count] >= 'a' && str[count] <= 'z')
			       	|| (str[count] >= 'A' && str[count] <= 'Z'))
		{
			if ((str[count] >= 'a' && str[count] <= 'm')
				|| (str[count] >= 'A' && str[count] <= 'M'))
					str[count] += 13;
			else
				str[count] -= 13;
			count++;
		}
		count++
	}
	return (str);
}
