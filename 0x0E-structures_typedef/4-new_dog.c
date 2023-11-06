#include <stdlib.h>
#include "dog.h"
/**
 * new_dog - gg
 * @name: jj
 * @age: jj
 * @owner: jj
 * Return: jj
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *a;

	a = malloc(sizeof(dog_t));
	if (a == NULL)
		return (NULL);
	a->name = name;
	a->age = age;
	a->owner = owner;
	return (a);
}
