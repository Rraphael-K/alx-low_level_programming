#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	/* Declare number variables */
	int fnum, sNum;

	/* Create compinations */
	for (fnum = 0; fnum <= 98; fnum++)
	{
		for (sNum = fnum + 1; sNum <= 99; sNum++)
		{
			/* ensure that the numbers do not repeat and are ascending */
			/*
			 * divide the number to get the fraction
			 * get the module value to print it out
			 * ensure that zero is added to the number
			 * Zero becomes the default output since numbers
			 * sre not characters
			 */
			putchar((fnum / 10) + '0');
			putchar(fnum % 10 + '0');
			/* add a space to seperate the number combination*/
			putchar(' ');
			putchar(sNum / 10 + '0');
			putchar(sNum % 10 + '0');

			/* End loop when 99 is reached */
			if (fnum == 98 && sNum == 99)
				continue;

			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
