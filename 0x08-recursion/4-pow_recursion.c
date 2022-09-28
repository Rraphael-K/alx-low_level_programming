#include "main.h"

/**
 * _pow_recursion - Function returns valueof x to power y
 * @x: Basse
 * @y: Exponent
 *
 * Return: x to the power of y
 */

int _pow_recursion(int x, int y)
{
	if (y == 0)
		return (1);
	else if (y < 0)
		return (-1);
	else if (y == 1)
		return (x);
	return (x * _pw_recursion(x, y - 1));
}
