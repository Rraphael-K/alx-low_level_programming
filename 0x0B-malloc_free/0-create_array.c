#include "main.h"
#include <stdlib.h>

/**
 * create_array - Create array of charactor and init with specific char
 * @zise: size of array
 * @c: Char to init array
 * Return: Pointer of array or NULL
 */
char *create_array(unsigned int size, char c)
{
	/* check if char's are in the string */
	char *s;
	unsigned int count = 0;

	s = malloc(size * sizeof(char));

	if (s == NULL)
		return (NULL);
	if (size == 0)
		return (NULL);
	while (count < size)
	{
		s[count] = c;
		count++;
	}
	return (s);
}
