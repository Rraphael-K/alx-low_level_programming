#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	/* declare unassigned number variables */
	int fnum, sNum;

	/* generate the first number for the combination */
	for (fnum = '0'; fnum <= '9'; fnum++)
	{
		/*generate second number for combination */
		for (sNum = '0'; sNum <= '9'; sNum++)
		{
			/* ensure numbers combined are not the same */
			if (fnum  != sNum)
			{
				/*Print out the combination */
				putchar(fnum);
				putchar(sNum);
				/**
				 * ensure that the numbers combinations
				 * do not go beyond 8 and 9
				 * end the loop once 99 is reached
				 */
				if (fnum == '8' && sNum == '9')
					continue;
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');

	return (0);
}
