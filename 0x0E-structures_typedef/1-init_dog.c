#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - Funct that initializes variables for type dog
 * @d: initialize struct
 * @name: Dog name
 * @age: Dog age
 * @owner: Dog owner
 *
 * Return: Void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	/* if no details for dog, return nothing */
	if (d == NULL)
		return;

	d->name = name;
	d->age = age;
	d->owner = owner;
}
