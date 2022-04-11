#include "dog.h"
#include <stdlib.h>

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
		return (NULL);

	return (newDog);
}
