#include "dog.h"
#include <stdlib.h>
#include <string.h>
/**
 * new_dog - creates a new dog
 * @name: name
 * @age: age
 * @owner: owner
 * Return: new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *doggo;
	if (!name || age < 0 || !owner)
		return (NULL);
	doggo = (dog_t *)malloc(sizeof(dog_t));
	if (doggo == NULL)
		return (NULL);
	doggo->name = malloc(sizeof(char) * (strlen(name)));
	if ((*doggo).name == NULL)
	{
		free(doggo);
		return (NULL);
	}
	doggo->owner = malloc(sizeof(char) * (strlen(owner)));
	if ((*doggo).owner == NULL)
	{
		free(doggo->name);
		free(doggo);
		return (NULL);
	}
	doggo->name = name;
	doggo->age = age;
	doggo->owner = owner;
	return (doggo);
}
