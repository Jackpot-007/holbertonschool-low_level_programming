#include "dog.h"
#include <stddef.h>
/**
 * init_dog - function
 * @d: pointer
 * @name: pointer
 * @age: whole
 * @owner: pointer
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
