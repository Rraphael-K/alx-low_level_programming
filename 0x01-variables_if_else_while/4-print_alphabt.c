#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	/*declare alphabet placeholder */
	char alpha, skipE, skipQ;

	skipE = 'e';
	skipQ = 'q';

	/* Print the alphabet except for e and q */
	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		if (alpha != skipE && alpha != skipQ)
			putchar(alpha);
	}
	putchar('\n');
	return (0);
}
