#include "main.h"
#include <stdio.h>

/**
 * print_array - Print array elements of integers
 * @a: Array input
 * @n: Integer input
 *
 * Return: Nothing
 */

void print_array(int *a, int n)
{
	int count = 0;

	for (; count < n; count++)
	{
		printf("%d", a[count]);
		if (count < n - 1)
			printf(", ");
	}
	printf("\n");
}
