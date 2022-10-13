#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - Print numbers of all parameters
 * @seperator: Print string between numbers
 * @n: Input Integer
 * @...: Other parameters
 *
 * Return: Interger inputs
 */
void print_numbers(const cahr *seperator, const unsigned int n, ...)
{
	va_list list;
	unsigned int counter = 0;
	int num;

	va_start(list, n);
	for (; counter < n; counter++)
	{
		num = va_arg(list, int);
		printf("%d", num);

		if (seperator == NULL)
			continue;

		if (counter < n - 1)
			printf("%s", seperator);
	}
	printf("\n");

	va_end(list);
}
