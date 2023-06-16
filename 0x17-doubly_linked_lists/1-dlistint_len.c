#include "lists.h"

/**
 * dlistint_len - returns number if elements in a linked list
 * @h: head pointer
 * Return: number of elements in the list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}

	return (count);
}
