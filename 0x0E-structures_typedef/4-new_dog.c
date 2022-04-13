#include "dog.h"
#include <stdlib.h>
#include <string.h>

/**
 * new_dog - creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: name of the owner
 *
 * Return: pinter to the dog or NULL
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newDog = malloc(sizeof(dog_t));

	if (newDog == NULL)
		return (NULL);

	newDog->name = malloc(sizeof(name));
	newDog->owner = malloc(sizeof(owner));
	newDog->age = age;

	if (newDog->name == NULL || newDog->owner == NULL)
	{
		free(newDog->owner);
		free(newDog->name);
		free(newDog);
		return (NULL);
	}

	strcpy(newDog->name, name);
	strcpy(newDog->owner, owner);

	return (newDog);
}
