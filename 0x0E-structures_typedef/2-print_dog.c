#include "dog.h"
#include <stdio.h>
/**
 * print_dog - prints a struct dog
 * @d: struct
 */
void print_dog(struct dog *d)
{
	if (d)
	{
		if (!d->name)
			printf("Name: (nil)\n");
		else
			printf("Name: %s\n", d->name);
		if (!d->age)
			printf("Name: (nil)\n");
		else
			printf("Name: %f\n", d->age);
		if (!d->owner)
			printf("Name: (nil)\n");
		else
			printf("Name: %s\n", d->owner);
	}
}
