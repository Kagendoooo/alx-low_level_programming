#include "lists.h"
/**
 * sum_dlistint - Return the sum of all the data
 * @head: Pointer to head of list
 * Return: Sum of all the data in the list or 0
*/
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
