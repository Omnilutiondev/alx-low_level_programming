#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - This function frees memory allocated for a dog
 *
 * @d: This the pointer to dog_t structure to free
 *
 * Description: This is a function that frees the memory allocated for a dog structure,
 * including the memory allocated for its name and owner.
 */

void free_dog(dog_t *d)
{
	if (d == NULL)
		return;

	if (d->name != NULL)
		free(d->name);

	if (d->owner != NULL)
		free(d->owner);

	free(d);
}
