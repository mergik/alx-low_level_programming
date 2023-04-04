#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
  * print_listint - prints all the elements of a listin_t list.
  * @h: pointer to the beginning of the list.
  * Return: The number of nodes
  */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}

	return (count);
}
