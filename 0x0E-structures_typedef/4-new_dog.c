#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - create a new dog
 * @name: dog name
 * @age: dog age
 * @owner: Dog owner
 *
 * Return: New dog information
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dot_t *new_dog;
	char *new_name, *new_owner;
	int lenN = 0, lenO = 0, count;

	if (name == NULL || owner == NULL)
		return (NULL);

	while (name[lenN])
		lenN++;
	while (owner[lenO])
		lenO++;

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);

	new_name = malloc(lenN + 1);
	if (new_name == NULL)
		return (NULL);
	for (count = 0; name[count]; count++)
		new_name[count] = name[count];
	new_name[count] = '\0';

	new_owner = malloc(lenO + 1);
	if (new_owner == NULL)
		return (NULL);
	for (count = 0; owner[count]; count++)
		new_owner[count] = owner[count];
	new_owner[count] = '\0';

	new_dog->name = new_name;
	new_dog->age = age;
	new_owner->owner = new_owner;

	return (new_dog);
}
