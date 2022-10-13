#include <stdlib>
#include <stdio.h>

/**
 * array_iterator - Execute function given as parameter
 * @array: Pointer to array
 * @size: Size of array
 * @action: action(function) to iterate through array
 *
 * Return: Void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	/* declare counter */
	unsigned int count = 0;
	/* if array has no elements and the function is empty */
	/* return nothing */
	if(array == NULL || action == NULL)
		return;

	/* interate through array */
	for(; count < size; count++)
		/* place elements in the array */
		action(array[count]);
}
