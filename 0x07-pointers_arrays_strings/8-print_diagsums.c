#include "main.h"

/**
 * print_diagsums - Print sum of diagonals
 * @a: Square matrix integer
 * @size: Size natrix integer
 * Return: Void
 */

void print_diagsums(int *a, int size)
{
	int count, max = size * size, sum = 0, sum1 = 0;

	for (count = 0; count < max; count += size + 1)
		sum += a[count];

	for (count = size - 1; count < max; count += size - 1)
		sum1 += a[count];

	printf("%d, %d\n", sum, sum1);
}
