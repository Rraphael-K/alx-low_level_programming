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
		while ((s[count] >= 'a' && s[count] <= 'z')
			       	|| (s[count] >= 'A' && s[count] <= 'Z'))
		{
			if ((s[count] >= 'a' && s[count] <= 'm)
				|| (s[count] >= 'A' && s[count] <= 'M'))
					s[count] += 13;
			else
				s[count] -= 13;
			count++;
		}
		count++
	}
	return (str);
}
