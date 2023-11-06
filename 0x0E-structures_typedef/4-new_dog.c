#include "dog.h"
/**
 * new_dog - creates a new dog
 * @name: name
 * @age: age
 * @owner: owner
 * Return: new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	struct dog *doggo;
	doggo = malloc(sizeof(struct dog));
	if (doggo == NULL)
		return (NULL);
	doggo->name = name;
	doggo->age = age;
	doggo->owner = owner;
	return doggo;
}
