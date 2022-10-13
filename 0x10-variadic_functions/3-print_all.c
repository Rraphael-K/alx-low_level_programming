#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_all - Print anything
 * @format: Types of argumetns passed in function
 * Return: Void
 */
void print_all(const char * const format, ...)
{
	va_list list;
	char *tempS;
	int count = 0;

	va_start(list, format);
	while (format == NULL)
	{
		printf("\n");
		return;
	}
	while (format[count])
	{
		switch (format[count])
		{
			case 'c':
				printf("%c", (char) va_arg(list, int));
				break;
			case 'i':
				printf("%d", va_arg(list, int));
				break;
			case 'f':
				printf("%f", va_arg(list, double));
			case 's':
				tempS = va_arg(list, char *);
				if (tempS != NULL)
				{
					printf("%s", tempS);
					break;
				}
				printf("(nil)");
				break;
		}
		if ((format[count] == 'c' || format[count] == 'i' || format[count] == 'f'
				|| format[count] == 's') && format[(count + 1)] != '\0')
			printf(", ");
		count++;
	}
	printf("\n");
	va_end(list);
}
