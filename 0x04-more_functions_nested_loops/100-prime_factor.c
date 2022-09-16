#include <stdio.h>
/**
 * main - Entry point
 * Description: Print the prime numbers
 *
 * Return: 0
 */

int main(void)
{
	unsigned long int prime = 2, num = 612852475143;

	while (num > 1)
	{
		/* check if it is a prime number */
		if (num % prime == 0)
		{
			printf("%lu", prime);
			num /= prime;
			printf(", ");
		}
		else
			prime++;
	}
	printf("\n");
	return (0);
}
