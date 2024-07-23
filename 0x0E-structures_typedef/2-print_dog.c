#include "dog.h"
#include <stdio.h>

/**
 * print_dog - This function prints a struct dog
 *
 * @d: The pointer to struct dog to print
 *
 * Description: This is the function that prints the members of a struct dog.
 * If an element is NULL, it prints (nil) instead.
 * If d is NULL, it prints nothing.
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	printf("Name: %s\n", (d->name != NULL) ? d->name : "(nil)");
	printf("Age: %f\n", d->age);
	printf("Owner: %s\n", (d->owner != NULL) ? d->owner : "(nil)");
}
