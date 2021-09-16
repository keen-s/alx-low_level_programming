#include "lists.h"

/**
 *A function that returns the number of elements in a linked dlistint_t list.

*Prototype: size_t dlistint_len(const dlistint_t *h);f nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *current = h;
	size_t size = 0;

	while (current)
		size++, current = current->next;
	return (size);
}
