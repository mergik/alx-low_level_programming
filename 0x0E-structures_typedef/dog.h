#ifndef DOG_H
#define DOG_H

/**
 * struct dog - a dog struct
 * @name: the name of the dog
 * @age: the age of the dog
 * @owner: the name of the owner of the dog
 *
 * Description: This struct represents a dog and includes the dog's name, age
 * and the name of the owner.
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
