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
	int fnum, sNum, Tnum;

	/* generate the first number for the combination */
	for (fnum = '0'; fnum <= '9'; fnum++)
	{
		/*generate second number for combination */
		for (sNum = fnum + 1; sNum <= '9'; sNum++)
		{
			for (Tnum = sNum + 1; Tnum <= '9'; Tnum++)
			{
				/* ensure numbers combined are not the same */
				if ((sNum != fnum)  != Tnum)
				{
					/*Print out the combination */
					putchar(fnum);
					putchar(sNum);
					putchar(Tnum);
					/**
					 * ensure that the numbers combinations
					 * do not go beyond 7 and 8
					 * end the loop once 789 is reached
					 */
					if (fnum == '7' && sNum == '8')
						continue;
					
					putchar(',');
					putchar(' ');

				}
			}
		}
	}
	putchar('\n');

	return (0);
}
