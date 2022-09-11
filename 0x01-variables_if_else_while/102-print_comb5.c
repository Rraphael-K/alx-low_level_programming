#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	/* declare variables */
	int fNum, sNum;

	/* create the number combination */
	for (fNum = 0; fNum = 98; fNUm++)
	{
		for (sNum = fNum + 1; sNum <= 99; sNum++)
		{
			/* print the combined numbers 
			 * add a char 0 to replace the automatically generate 0's
			 */
			putchar((fNum / 10) + '0');
			putchar((fNum % 10) + '0');
			putchar(' ');
			putchar((sNum / 10) + '0');
			putchar((sNum % 10) + '0');

			/* do not continue once 99 is reached */
			if (fNum == 98 && sNum == 99)
				continue;
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}
