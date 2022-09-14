#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - Function
 * @n: To catch user input
 *
 * Return: Nothing
 */
void print_to_98(int n)
{
	if (n <= 98)
	{
		/* run through the numbers to print */
		while (n <= 98)
		{
			printf("%d", n);
			if (n == 98)
				continue;
			printf(", ");
			n++;
		}
		printf("\n");
	}
	else
	{
		while (n >= 98)
		{
			printf("%d", n);
			if (n == 98)
				continue;
			printf(", ");
			n--;
		}
		printf("\n");
	}
