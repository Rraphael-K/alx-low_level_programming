#include "main.h"

/**
 * _strcat - function that concatenates two strings
 * @dest: String input
 * @src: String input
 *
 * Return: Pointer to the string result
 */

char *_strcat(char *dest, char *src)
{
	/* to  store the string of dest */
	char *temp = dest;

	/* increment/create the string for dest */
	while (*dest)
		dest++;

	/* concatenate the strings */
	while (*src)
		*dest++ = *src++;

	/* end the string once it reaches the string end */
	*dest = '\0';
	return (temp);

}
