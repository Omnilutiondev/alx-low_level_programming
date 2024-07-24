#include "dog.h"
#include <stdio.h>

/**
 * print_dog - This function prints a struct dog
 *
 * @d: The pointer to struct dog to print
 *
 * Description: This function prints the members of a struct dog
 * If an element is NULL, it will print (nil) instead
 * if d is NULL, it prints nothing.
 */

void print_dog(struct dog *d)
{
	if (d)
	{
	if (!((*d).name))
	printf("Name: (nil)\n");
	else
	printf("Name: %s\n", d->name);
	printf("Age: %f\n", d->age);
	if (!(d->owner))
	printf("Owner: (nil)\n");
	else
	printf("Owner: %s\n", (*d).owner);

	}
}
