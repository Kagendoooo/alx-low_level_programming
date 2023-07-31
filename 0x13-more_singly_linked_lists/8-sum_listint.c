#include "lists.h"
/**
 * sum_listint - Calculate sum of data
 * @head: pointer to head of list being freed
 * Return: 0 or Sum of all data
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
