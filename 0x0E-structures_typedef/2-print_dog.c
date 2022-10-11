#include <stdlib.h>
#include "dog.h"

/**
 * print_dog - Print details of dog
 * @d: Initialize dog
 *
 * Return: void
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if (d->name == NULL)
		d->name = "(nil)";
	if (d->age == NULL)
		d->age = "(nil)";

	printf("Name: %s\n Age: %.2f\n Owner: %s\n", d->name, d->age, d->owner);
}
