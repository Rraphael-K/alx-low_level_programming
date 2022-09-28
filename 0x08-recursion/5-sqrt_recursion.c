#include "main.h"

/**
 * _sqrt - Find square root
 * @intV: Initial value
 * @root: square root value
 *
 * Return: square root
 */

int _sqrt(int initV, int root)
{
	if (initV > root)
		return (-1);
	else if (initV * initV == root)
		return (initV);
	return (_sqrt(initV +1, root));
}

/**
 * _sqrt_recursion - Return value of square root n
 * @n: Integer Input
 *
 * Return: square root of n
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (_sqrt(1, n));
}
