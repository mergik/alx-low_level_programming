#include "lists.h"
#include <stdlib.h>

/**
 * get_nodeint_at_index - Returns the nth node of a listint_t linked list.
 * @head: Pointer to the head node of the linked list.
 * @index: Index of the node to be returned (starting from 0).
 * Return: Pointer to the nth node of the linked list,
 * or NULL if it does not exist.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;
	listint_t *current_node = head;

	for (i = 0; i < index && current_node != NULL; i++)
		current_node = current_node->next;

	return (current_node);
}
