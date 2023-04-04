#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - Deletes node at a given index of a listint_t list
 * @head: Pointer to a pointer to the first node of the list.
 * @index: Index of the node to be deleted. Index starts at 0.
 * Return: 1 if the node was deleted successfully, -1 otherwise.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current, *prev;
	unsigned int i;

	if (*head == NULL)
		return (-1);

	current = *head;
	prev = NULL;

	if (index == 0)
	{
		*head = (*head)->next;
		free(current);
		return (1);
	}

	for (i = 0; i < index; i++)
	{
		if (current->next == NULL)
			return (-1);

		prev = current;
		current = current->next;
	}

	prev->next = current->next;
	free(current);

	return (1);
}
