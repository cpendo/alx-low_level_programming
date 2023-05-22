#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * new_dog - creates a new dog
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 *
 * Return: NULL if it fails
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int namelen = 0, ownlen = 0, i;

	dog = malloc(sizeof(*dog));

	if (dog == NULL || name == NULL || owner == NULL)
		return (NULL);

	while (name[namelen] != '\0')
	{
		namelen++;
	}

	while (owner[ownlen] != '\0')
	{
		ownlen++;
	}

	dog->name = malloc(namelen + 1);
	dog->owner = malloc(ownlen + 1);

	if (!(dog->name) || !(dog->owner))
	{
		free(dog->name);
		free(dog->owner);
		free(dog);
		return (NULL);
	}

	for (i = 0; i < namelen; i++)
		dog->name[i] = name[i];
	dog->name[i] = '\0';

	for (i = 0; i < ownlen; i++)
		dog->owner[i] = owner[i];
	dog->owner[i] = '\0';

	dog->age = age;

	return (dog);
}
