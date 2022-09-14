#include "main.h"
/**
 * _isalpha - See description
 * @c: user input to be compared
 *
 * Description: Checks for Uppercase letters
 *
 * Return: 1 if is uppercase esle return 0 if is lowercase
 */
int _isalpha(int c)
{
	char upper, lower;
	int letter = 0;

	/* since Upper cases are of a lower number, loop */
	for (lower = 'a'; lower <= 'z'; lower++)
	{
		for (upper = 'A'; upper <= 'Z'; upper++)
		{
			/*check if the letters are uppercase*/
			/* display 1 if the ltetter is uppercase */
			/* compare with input form main function */
			if (c == lower || c == upper)
				letter = 1;
		}
	}
	return (letter);
}
