/*
 * Creating a function
 * to print out the alphabet
 */
#include <stdio.h>
char ch, *string = "_putchar\n";

int *print_alphabet(void)
{
	char count;

	for (count = 'a'; count <= 'z'; count++)
		putchar(count);
	putchar('\n');

	return (0);
}
