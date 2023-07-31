#include "lists.h"
#include <stdio.h>

/**
 *listint_len - Returns the number of elements in list
 *@h: pointer to head of list
 *Return: number of elements in list
 */

size_t listint_len(const listint_t *h)
{
	size_t node = 0;

	while (h)
	{
		node++;
		h = h->next;
	}
	return (node);
}
