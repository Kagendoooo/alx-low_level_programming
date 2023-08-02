#include "lists.h"
#include <stdio.h>
/**
 * print_listint_safe - prints a list
 * @head: pointer to head of a list
 * Return: address of head
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *temp, *current;
	unsigned int count = 0;

	temp = head;
	if (temp == 0)
		return (0);

	while (temp != 0)
	{
		current = temp;
		temp = temp->next;

		count++;

		printf("[%p] %d\n", (void *)current, current->n);

		if (current <= temp)
		{
			printf("-> [%p] %d\n", (void *)temp, temp->n);
			break;
		}
	}

	return (count);
}
