#include "lists.h"

/** 
*Write a function that returns the nth node of a dlistint_t linked list.

*Prototype: dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index);
*where index is the index of the node, starting from 0
*if the node does not exist, return NULL
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current = head;

	while (current && index)
	{
		index--;
		current = current->next;
	}
	return (current);
}
