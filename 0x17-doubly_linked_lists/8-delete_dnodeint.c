#include "lists.h"

/**
 *Write a function that deletes the node at index index of a dlistint_t linked list.

 *Prototype: int delete_dnodeint_at_index(dlistint_t **head, unsigned int index);
 *where index is the index of the node that should be deleted. Index starts at 0
 *8Returns: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current = *head;
	size_t size = 0;

	if (!*head)
		return (-1);
	while (current)
	{
		size++;
		current = current->next;
	}
	if (size < index + 1)
		return (-1);
	current = *head;
	if (!index)
	{
		*head = current->next;
		if (current->next)
			current->next->prev = NULL;
		current->next = NULL;
		free(current);
		return (1);
	}
	while (index--)
		current = current->next;
	current->prev->next = current->next;
	if (current->next)
		current->next->prev = current->prev;
	free(current);
	return (1);
}
