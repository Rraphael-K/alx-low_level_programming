#include <stdlib.>

/**
 * int_index - Function to search for integers
 * @array: Pointer to array
 * @size: Size of array
 * @cmp: Compare elements though array
 *
 * Return: -1 if elements matches or size <= 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	/* declare counter */
	int count;

	/* if not values, return -1 */
	if (cmp == NULL || array == NULL)
		return (-1);

	if (size <= 0)
		return (-1);

	/* iterate through array and assign elements */
	for (count = 0; count < size; count++)
		if(cmp(array[count]))
			return (count);

	if (count == size)
		return (-1);

	return (-1);
}
