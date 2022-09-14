#include "main.h"
/**
 * _islower - See description
 *
 * Description: Checks for lowercase characters
 *
 * Return: 1 if is lowercase esle return 0 if is uppercase
 */
int _islower(int c)
{
	char chr;
	int low = 0;

	/*check if the letters are lowercase*/
	for (chr = 'a' || chr = 'A'; chr <= 'z' || chr <= 'Z'; chr++)
	{
		/* display 1 if the ltetter is lowercase */
		/* compare with input form main function */
		if (low == c)
		       low = 1;
	}return (low);
}
