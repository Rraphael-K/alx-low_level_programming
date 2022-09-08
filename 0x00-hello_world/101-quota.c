#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 *
 * Description: print out without any C files, unix standard
 *
 * Return: Always 1 (Success)
 */
int main(void)
{
	/**
	 * syntax for unix standard
	 * write(output-standard, string,size_of_string)
	 */
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 60);
	return (1);
}
