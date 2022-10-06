#include <stdlib.h>
#include "main.h"
/**
 * malloc_checked - Function to allocate memory using malloc
 * @b: Unsigned Integer Input
 *
 * Return: Pointer to allocated memory or NULL
 */
void *malloc_checked(unsigned int b)
{
	void *string;

	string = malloc(b);
	if (string == NULL)
		exit(98);

	return (string);
}
