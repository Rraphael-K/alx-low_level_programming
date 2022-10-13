#include <stdlib.h>

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int count = 0;

	if (array == NULL || action == NULL)
		return;

	for (; count < size; count++)
		action(array[count]);
}
