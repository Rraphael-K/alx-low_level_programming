#include "main.h"
/**
 * reverse_array - Function to reverse an array
 * @a: Integer Input
 * @n: Element counter
 * Return: Void
 */

void reverse_array(int *a, int n)
{
	int counter = 0;
	int swapI;

	while (counter < n--)
	{
		swapI = a[counter];
		a[counter++] = a[n];
		a[n] = swapI;
	}
}
