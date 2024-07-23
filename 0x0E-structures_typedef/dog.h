#ifndef DOG_H
#define DOG_H

/**
 * struct dog - This represents a dog with its basic information
 *
 * @name: The name of the dog
 * @age: The age of the dog
 * @owner: The name of the dog's owner
 * Description: This structure defines a dog based on
 * its name,age and the name of its owner.
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

#endif
