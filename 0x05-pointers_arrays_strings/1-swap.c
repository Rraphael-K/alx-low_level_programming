#include "main.h"

/**
 * swap_int - Swaps integers
 * @a: Initial number to be swapped with b
 * @b: Integer value to be swapped
 * Return: Nothing
 */

voidswap_int(int *a, int *b)
{
	int swapA;

	swapA = *a;
	*a = *b;
	*b = swapA;
}
