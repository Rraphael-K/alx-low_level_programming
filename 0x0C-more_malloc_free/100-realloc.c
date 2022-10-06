#include <stdlib.h>
#include "main.h"
/**
 * _realloc - Alloc memory block using malloc and free
 * @ptr: Pointer to previous alloc memory
 * @old_size: Size in bytes of prvious memory space
 * @new_size: Size in bytes of new memory space
 *
 * Return: Void
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *location, n_ptr;
	unsigned int count = 0;

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
	{
		ptr = malloc(new_size);
		if (ptr == NULL)
			return (NULL);
		return (ptr);
	}
	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}

	location = malloc(new_size);
	n_ptr = ptr;
	if (old_size > new_size)
		old_size = new_size;
	for (count = 0; count < old_size; count++)
		location[count] = n_ptr[count];

	free(ptr);
	return (location);
}
