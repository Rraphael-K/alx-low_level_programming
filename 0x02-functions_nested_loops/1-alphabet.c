#include "main.h"
#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	void print_alphabet(void)
	{
		char ch;
		for (ch = 'a'; ch <= 'z'; ch++)
			putchar(ch);
		putchar('\n');
	}

	return (0);
}
