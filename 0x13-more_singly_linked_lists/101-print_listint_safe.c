#include "lists.h"
#include <stdio.h>
/**
 * print_listint_safe - prints a list
 * @head: pointer to head of a list
 * Return: address of head
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t node_count = 0;
	const listint_t *current = head;
	const listint_t *temp;

	while (current != NULL)
	{
		printf("[%p] %d\n", (void *)current, current->n);
		node_count++;

		temp = current;
		current = current->next;

		/* Check for a loop */
		if (temp <= current)
		{
			printf("-> [%p] %d\n", (void *)current, current->n);
			exit(98);
		}
	}

	return (node_count);
}
