#include "lists.h"

/**
*Write a function that frees a dlistint_t list.

*Prototype: void free_dlistint(dlistint_t *head);
*/
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	if (!head)
		return;
	while (head)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
	head = NULL;
}
