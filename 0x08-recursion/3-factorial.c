#include "main.h"

/** factorial - Func to return factorial of a number
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
