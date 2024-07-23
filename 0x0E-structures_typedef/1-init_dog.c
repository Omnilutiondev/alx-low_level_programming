#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - This function initializes a variable of type struct dog
 *
 * @d: This is the pointer to struct dog to initialize
 * @name: This is the name to initialize
 * @age: This is the age to initialize
 * @owner: This is the owner to initialize
 *
 * Description: This function takes a pointer to struct dog and initializes
 * its members with the provided values.
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;

	d->name = name;
	d->age = age;
	d->owner = owner;
}
