#include "dog.h"

/**
 * init_dog -  function that initialize a variable of type struct dog
 * @d: pointer struct dog
 * @name: name dog
 * @age: age dog
 * @owner: owner dog
 *
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
