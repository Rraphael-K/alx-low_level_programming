#include "main.h"
/**
 * cap_string = Convert to Uppercase
 * @s: String Input
 * Return: S
 */
char *cap_string(char *s)
{
	/* counter */
	int count = 0;
	
	 while (s[count])
	 {
		 if (count == 0 && (s[count] >= 'a' && s[count] <= 'z'))
				 s[count] -= 32;
		 if (check(s[i]) && (s[count + 1] >= 'a' && s[count + 1] <= 'z'))
			 s[count + a] -= 32;
		 count++;
	 }
	 return (s);
}

/**
 * check - Removes special char and spaces
 * @c: Char input
 * Return: 1 or 0
 */
int check(char c)
{
	int count = 0;
	char sep[13] = {' ', '\t', '\n', ',', '.', ';', '?', '"', ')', '(',
	     '{', '}', '!' };

	for (; count < 13; count++)
	{
		if (c == sep[count])
			return (1);
	}
	return (0);
}

