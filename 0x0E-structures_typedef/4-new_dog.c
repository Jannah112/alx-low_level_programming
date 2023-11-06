#include "dog.h"
#include <stdlib.h>
/**
 * _strcpy - f name
 * @src: par
 * @dest: name
 * Return: return
 */
char *_strcpy(char *dest, char *src)
{
	int j;
	int c = 0;

	while (src[c] != 0)
	{
		c = c + 1;
	}
	for (j = 0; j < c; j++)
	{
		dest[j] = src[j];
	}
	dest[c] = '\0';
	return (dest);
}
/**
 * new_dog -  jj
 * @name: uu
 * @age: gh
 * @owner: kk
 * Return: jj
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *a;
	int i = 0, j = 0;

	a = malloc(sizeof(dog_t));
	if (a == NULL)
		return (NULL);
	if (name != NULL)
	{
	while (name[i] != 0)
	{
		i++;
	}
	}
	if (owner != NULL)
	{
	while (owner[j] != 0)
	{
		j++;
	}
	}
	a->name = (char *) (malloc(sizeof(char) * (i + 1)));
	if (a->name == NULL)
	{
		free(a);
		return (NULL);
	}
	a->owner = (char *) (malloc(sizeof(char) * (j + 1)));
	if (a->owner == NULL)
	{
		free(a->name);
		free(a);
		return (NULL);
	}
	a->name = _strcpy(a->name, name);
	a->owner = _strcpy(a->owner, owner);
	a->age = age;
	return (a);
}

