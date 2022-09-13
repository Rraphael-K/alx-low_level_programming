#include "main.h"
/**
 * _islower - See description
 *
 * Description: Checks for lowercase characters
 *
 * Return: 1 if is lowercase esle return 2 if is uppercase
 */
int _islower()
{
	char chr;
	int low = 0;

	/*check if the letters are lowercase*/
	for (chr = 'a'; chr <= 'z'; chr++)
	{ 
		/* display 1 if the ltetter is lowercase */
		if (low == chr)
			return (1);
	} 
	return (0);

}
