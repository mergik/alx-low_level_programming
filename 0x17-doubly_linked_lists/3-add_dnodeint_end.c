#include "lists.h"

/**
 * add_dnodeint_end - Adds new node at the end of a doubly linked list.
 * @head: Head pointer
 * @n: Integer value to be stored
 * Return: Address of the new element, or NULL on failure
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
	{
		printf("Error: Unable to allocate memory for new node\n");
	return (NULL);
}

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		new_node->prev = NULL;
		*head = new_node;
	}
	else
	{
	dlistint_t *temp = *head;

	while (temp->next != NULL)
		temp = temp->next;

	temp->next = new_node;
	new_node->prev = temp;
	}

	return (new_node);
}
