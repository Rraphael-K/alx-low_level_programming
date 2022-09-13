/*
 * Creating a function
 * to print out the alphabet
 */
#include <stdio.h>
void print_alphabet(void)
{
	char count;

	for (count = 'a'; count <= 'z'; count++)
		putchar(count);
	putchar('\n');
}
