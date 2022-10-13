#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - A function to sum all variadic func parameters
 * @n: num of parameters
 * @...: Other parametrs
 *
 * Return: All parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list list;
	unsigned int count = 0;
	int sum = 0;

	if (n == 0)
		return (0);

	va_start(list, n);
	for (; count < n; count++)
		sum += va_arg(list, int);

	va_end(list);
	return (sum);
}
