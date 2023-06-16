#include "lists.h"

/**
 * add_dnodeint - adds new node at the beginning of a list
 * @head: head pointer
 * @n: int value to be stored
 * Return: address of new element or NULL on failure.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
	{
		printf("Error: Unable to allocate memory for new node\n");
		return (NULL);
	}

	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = *head;

	if (*head != NULL)
		(*head)->prev = new_node;

	*head = new_node;
	return (new_node);
}
