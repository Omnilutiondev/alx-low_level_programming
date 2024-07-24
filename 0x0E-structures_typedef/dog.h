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

void init_dog(struct dog *d, char *name, float age, char *owner);

void print_dog(struct dog *d);

dog_t *new_dog(char *name, float age, char *owner);

void free_dog(dog_t *d);

struct dog my_dog = {"Buddy", 3.5, "John"};
print_dog(&my_dog);

#endif
