#include "main.h"

/**
 * factorial - Function to print the factorial of an integer
 * @n: Integer Input
 *
 * Return: n
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n <= 1)
		return (1);
	return (n * factorial(n - 1));
}
