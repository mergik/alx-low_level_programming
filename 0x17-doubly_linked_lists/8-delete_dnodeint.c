#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes the node at a given index in a list.
 * @head: Pointer to a head pointer.
 * @index: Index of the node to be deleted. Index starts at 0.
 * Return: 1 if the deletion succeeded, -1 on failure.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current = *head;
	unsigned int i;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = current->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(current);
		return (1);
	}

	for (i = 0; i < index; i++)
	{
		if (current == NULL)
			return (-1);
		current = current->next;
	}

	if (current == NULL)
		return (-1);

	if (current->next != NULL)
		current->next->prev = current->prev;

	if (current->prev != NULL)
		current->prev->next = current->next;

	free(current);
	return (1);
}
