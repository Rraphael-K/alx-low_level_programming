#include <stdlib.h>

/**
 * array_iterator - Execute a given function in parameters
 * @array: Pointer to array
 * @size: Size of array
 * @action: Function to be iterated
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int count = 0;

	if (array == NULL || action == NULL)
		return;

	for (; count < size; count++)
		action(array[count]);
}
