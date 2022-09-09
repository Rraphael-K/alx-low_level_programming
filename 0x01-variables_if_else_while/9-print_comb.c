#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	/* declare number placeholder */
	int num;

	/*generate all posible combinations of the number 1 till 9 */
	for (num = '0'; num <= '9'; num++)
	{
		putchar(num);
	/* Ensure that the numbers make posible combinations */
		if (num != '9')
		{
			/* print a comma and a space before the next combo */
			putchar(',');
			putchar(' ');
		}
	}
	/* create anew line */
	putchar('\n');
	return (0);
}
