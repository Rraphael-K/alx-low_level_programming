#include <unistd.h>
/**
 * _put char - writes the character c to the stdout
 * @c: the character to print
 *
 * Return: Always 1 (success)
 * On error, -1 is returned, and errno is set appropriate;y.
 */
int _putchar(char c)
{
	return(write(1, &c, 1));
}
