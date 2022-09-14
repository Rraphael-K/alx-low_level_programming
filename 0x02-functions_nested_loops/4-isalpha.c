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
	int upper = 0;

	/*check if the letters are uppercase*/
	/* display 1 if the ltetter is uppercase */
	/* compare with input form main function */
	if (c <= 'A' && c >= 'Z')
	{
		upper = 1;
	}
	else
	{
		upper = 0;
	}
	return (upper);
}
