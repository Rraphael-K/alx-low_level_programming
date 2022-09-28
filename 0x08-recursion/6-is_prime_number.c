#include "main.h"
/**
 * divisible - Check is n is divisible
 * @n: Integer to be checked
 * @div: Result of division
 *
 * Return: 1 if divisible or 0
 */
int divisible(int n, int div)
{
	if (n % div == 0)
		return (0);
	if (div == n / 2)
		return (1);

	return (divisible(n, div + 1));
}

/**
 * is_prime_number - Check if number is prime
 * @n: Integer Input
 *
 * Return: 1 if prime or 0
 */
int is_prime_number(int n)
{
	int div = 2;

	if (n <= 1)
		return (0);
	if (n <= 3)
		return (1);

	return (divisible(n, div));
}
