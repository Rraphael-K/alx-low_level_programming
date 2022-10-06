#include <stdlib.h>
#include "main.h"
/**
 * _calloc - Function to allocate memory to array
 * @nmemb: Num of memory spaces
 * @size: Size of nmemb
 *
 * Return: Pointer to allocated space or NULL
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int count = 0;
	char *spaces;

	if (nmemb == 0 || size == 0)
		return (NULL);

	spaces = malloc(nmemb * size);

	if (spaces == NULL)
		return (NULL);
	for (; count < nmemb * size; count++)
		*(spaces * count) = 0;

	return (spaces);
}
