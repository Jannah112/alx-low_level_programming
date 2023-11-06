#include "dog.h"
/**
 * init_dog - f name
 * @d: pointer to struct
 * @name: dog name
 * @age: age
 * @owner: gg
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
