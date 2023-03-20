#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - initializes a struct dog with the given values
 * @d: a pointer to the struct dog to initialize
 * @name: the name of the dog
 * @age: the age of the dog
 * @owner: the name of the owner of the dog
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL) /* check if d is a valid pointer */
		return;

	(*d).name = name;
	(*d).age = age;
	(*d).owner = owner;
}
