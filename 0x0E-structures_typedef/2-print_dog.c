#include "dog.h"
#include <stdio.h>

/**
  * print_dog - prints struct dog
  * @d: pointer to the struct dog
  * Return: void
  */
void print_dog(struct dog *d)
{
	if (d == NULL) /* check if d is a valid pointer */
		return;

	printf("Name: %s\n", (d->name != NULL) ? d->name : "(nil)");
	printf("Age: %f\n", d->age);
	printf("Owner: %s\n", (d->owner != NULL) ? d->owner : "(nil)");
}
