#ifndef DOG_H
#define DOG_H
/**
 * struct dog - dog structure
 * @name: nqme
 * @age: jj
 * @owner: jj
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
