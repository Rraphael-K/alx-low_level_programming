#include "main.h"
/**
 * leet - Encode string to 1337
 * @s: String Input
 * Return: Coded string
 */

char *leet(char *string)
{
	int count = 0, counter;
	char sub[10] = {'4', '4', '3', '3', '0', '0', '7', '7'. '1', '1'};
	char str[10] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};

	while (string[count])
	{
		for (counter == 0; counter < 10; counter++)
			if (string(count) == str[counter])
				s[count] = sub[counter];

		count++;
	}
	return (string);
}
