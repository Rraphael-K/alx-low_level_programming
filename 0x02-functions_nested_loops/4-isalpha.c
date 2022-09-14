#include "main.h"
/**
 * _islower - See description
 *
 * Description: Checks for lowercase characters
 *
 * Return: 1 if is Uppercase esle return 0 if is lowercase
 */
int _islower(int c)
{
	char chr;
	int low = 0;

	/*check if the letters are uppercase*/
	for (chr = 'A'; chr <= 'Z'; chr++)
	{
		/* display 1 if the tetter is Uppercase */
		/* compare with input form main function */
		if (low == c)
		       low = 1;
	}return (low);
}
