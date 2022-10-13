#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - Print strings from parameter
 * @separator: String between the parameter strings
 * @n: Number of string inputs
 * @...: Other parameters
 *
 * Return: Strings
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int count = 0;
	char *string;

	va_start(list, n);
	for (; count < n; count++)
	{
		string = va_arg(list, char *);
		if (string == NULL)
			printf("nil");
		else
			printf("%s", string);

		if (separator == NULL)
			continue;
		if (count < (n - 1))
			printf("%s", separator);
	}
	printf("\n");
	va_end(list);
}
