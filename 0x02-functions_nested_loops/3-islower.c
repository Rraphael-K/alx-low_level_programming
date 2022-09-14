#include "main.h"
/**
 * _islower - See description
 * c - user input to be compared
 *
 * Description: Checks for lowercase characters using c
 *
 * Return: 1 if is lowercase esle return 0 if is uppercase
 */
int _islower(int c)
{
	char chr;
	int low = 0;

	/*check if the letters are lowercase*/
	for (chr = 'a'; chr <= 'z'; chr++)
	{
		/* display 1 if the ltetter is lowercase */
		/* compare with input form main function */
		if (low >= 'a' && low <= z')
		{
			low = 1;
		}
		else
		{
			low = 0;
		}
	}
	return (low);
}
