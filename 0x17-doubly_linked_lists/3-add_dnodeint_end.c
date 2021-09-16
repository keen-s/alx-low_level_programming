#include "lists.h"

/**
*Write a function that adds a new node at the end of a dlistint_t list.

*Prototype: dlistint_t *add_dnodeint_end(dlistint_t **head, const int n);
*Return: the address of the new element, or NULL if it failed
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newNode;
	dlistint_t *current = *head;

	newNode = malloc(sizeof(dlistint_t));
	if (!newNode)
	{
		dprintf(2, "Error: Can't malloc\n");
		return (NULL);
	}
	newNode->n = n;
	newNode->next = NULL;

	if (!current)
	{
		newNode->prev = NULL;
		*head = newNode;
		return (newNode);
	}

	while (current->next)
	{
		current = current->next;
	}
	current->next = newNode;
	newNode->prev = current;
	return (newNode);
}
