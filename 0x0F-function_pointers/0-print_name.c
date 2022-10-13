#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * print_name - Prints a name
 * @name: Pointer to name to be printed
 * @f: Function to print name
 *
 * Return: Void
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	/* thus return the name */
	f(name);
}
