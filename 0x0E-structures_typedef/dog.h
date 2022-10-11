#ifndef _DOG_H_
#define _DOG_H_
/**
 * struct dog - structure for a dog
 * @name: Dog name
 * @age: - Dog age
 * @owner: Dog owner
 *
 * Destription: Structure for a dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
typedef struct dog _dog;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif /* _DOG_H_ */