#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * new_dog - This function creates a new dog
 *
 * @name: The name of the dog
 * @age: The age of the dog
 * @owner: The owner of the dog
 *
 * Return: Pointer to the new dog (Success), NULL otherwise
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int len_name, len_owner;

	if (name == NULL || owner == NULL)
		return (NULL);

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	len_name = strlen(name);
	len_owner = strlen(owner);

	dog->name = malloc(sizeof(char) * (len_name + 1));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	strcpy(dog->name, name);

	dog->owner = malloc(sizeof(char) * (len_owner + 1));
	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}
	strcpy(dog->owner, owner);

	dog->age = age;

	return (dog);
}
