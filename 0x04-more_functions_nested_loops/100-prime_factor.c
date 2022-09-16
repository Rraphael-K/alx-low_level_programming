#include <stdio.h>

/**
 * main - Entry point
 * Description: Display the prime numbers 
 *
 * Return: 0
 */

int main(void)
{
	unsigned long int count = 2, num = 612852475143;

	/* if the num is greater than one */
	while (num > 1)
	{
		/* if the remainder of the number is zero */
		/* continue */
		if (num % count == 0)
		{
			/* display prime number */
			printf("%lu\n", count);
			/* Divide num by count if prime */
			num /= count;
		}
		else
			/* continue until the max num is reached */
			count++;
	}

	return (0);
}
