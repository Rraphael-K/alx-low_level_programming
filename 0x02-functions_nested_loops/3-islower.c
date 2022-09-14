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
i	int low = 0;

	/*check if the letters are lowercase*/
	for (c = 'a'; c <= 'z'; c++)
	{
		/* display 1 if the ltetter is lowercase */
		/* compare with input form main function */
		if (low == c)
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
