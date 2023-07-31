#include "lists.h"
#include <stdio.h>
/**
 * print_listint - Prints all elements of list
 * @h: pointer to head of list
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t elements = 0;

	while (h)
	{
		elements++;
		printf("%d\n", h->n);
		h = h->next;
	}

	return (elements);
}
