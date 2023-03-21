#include <stdlib.h>
#include "dog.h"

/**
  * free_dog - frees memory allocated for a dog struct
  * @d: pointer to the dog struct to free
  * Return: void
  */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;

	free(d->name);
	free(d->owner);
	free(d);
}
