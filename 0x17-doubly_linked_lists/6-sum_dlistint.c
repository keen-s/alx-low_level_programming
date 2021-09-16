#include "lists.h"

/**
*Write a function that returns the sum of all the data (n) of a dlistint_t linked list.
*
*Prototype: int sum_dlistint(dlistint_t *head);
*if the list is empty, return 0
*/
int sum_dlistint(dlistint_t *head)
{
	register int sum = 0;
	dlistint_t *current = head;

	while (current)
	{
		sum += current->n;
		current = current->next;
	}
	return (sum);
}
