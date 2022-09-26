#include "main.h"
/**
 * _memcpy - Fucntion to copy memory
 * @dest: Destination to copy the memory
 * @src: Source of copy
 * @n: Bytes
 *
 * Return: Copy location
 */

char *memcpy(char *dest, char *src, unsigned int n)
{
	char *strt = dest;

	while (n--)
	{
		*dest = *src;
		src++;
		dest++;
	}
	return (strt);
}
