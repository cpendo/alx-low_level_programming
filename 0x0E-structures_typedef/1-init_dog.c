#include "dog.h"

/**
 * init_dog - initialize a variable of type struct dog
 * @d: Pointer to dog struct
 * @name: Pointer to dog name
 * @age: Dog age
 * @owner: Pointer to dog owner
 *
 * Return: 0 if successful
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
