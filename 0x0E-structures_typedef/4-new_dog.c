#include "dog.h"
#include <stdlib.h>
/**
 * new_dog - creates a new dog
 * @name: name member of new dog
 * @age: age member of new dog
 * @owner: owner member of new dog
 * Return: pointer to the new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newdog;

	newdog = malloc(sizeof(dog_t));
	if (newdog == NULL)
		return (NULL);
	newdog->name = name;
	newdog->age = age;
	newdog->owner = owner;
	return (newdog);
}
