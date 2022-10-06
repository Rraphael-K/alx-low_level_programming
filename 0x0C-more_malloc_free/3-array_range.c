#include <stdlib.h>
#include "main.h"
/**
 * array_range - Create an array of integers
 * @min: Minimum starting Number
 * @max: Maximum starting Number
 *
 * Return: Pointer
 */
int *array_range(int min, int max)
{
	int *n_array;
	int diff, count = 0;

	if (min > max)
		return (NULL);
	diff = max - min;

	n_array = malloc((diff + 1) * sizeof(int));
	if(n_array == NULL)
		return (NULL);

	for (; count <= diff; count++)
		n_array[count] = min++;

	return (n_array);
}
