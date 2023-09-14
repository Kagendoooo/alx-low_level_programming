#include "lists.h"
#include <stdio.h>
/**
 * print_dlistint -  prints all the elements of a dlistint_t list
 * @h: pointer to head of list
 * Return: Number of nodes in list
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t node = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		node++;
	}

	return (node);
}
