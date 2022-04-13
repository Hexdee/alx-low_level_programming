#include "dog.h"
/**
 * init_dog -  a function that initialize a variable of type struct dog
 * @d: pointer to a dog struct
 * @name: the dog name
 * @age: the dog age
 * @owner: name of the dog owner
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d && name && owner)
	{
		d->name =  name;
		d->age = age;
		d->owner = owner;
	}
}
