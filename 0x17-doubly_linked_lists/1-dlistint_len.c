#include "lists.h"
#include <stdio.h>
/**
 * dlistint_len - Return the number of elements in a linked dlistint_t list
 * @h: Pointer to head of list
 * Return: Number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t elem = 0;

	while (h != NULL)
	{
		elem++;
		h = h->next;
	}

	return (elem);
}
