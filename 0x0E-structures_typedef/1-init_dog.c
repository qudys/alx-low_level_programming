#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - initialize variable of type struct dog
 * @d: pointer to variable of type struct dog
 * @name: name member of struct dog
 * @age: age member of struct dog
 * @owner: owner member of struct dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
