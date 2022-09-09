#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Description: Varifying it a random number is
 * positive or negative using the if statement
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	/* generate a random number and display the last digit of a random number */
	int l_digit = n % 10;

	if (l_digit > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, l_digit);
	} else if (l_digit < 6 && l_digit != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, l_digit);
	} else
		printf("Last digit of % d is %d and is 0\n", n, l_digit);
	return (0);
}

