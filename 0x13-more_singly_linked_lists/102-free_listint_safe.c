#include "lists.h"
/**
 * free_listint_safe - prints a list
 * @h: address of pointer to first node
 * Return: address of head
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *temp = *h, *node;
	unsigned int count = 0;

	if (temp == 0 || h == 0)
		return (0);

	temp = *h;
	while (temp != 0)
	{
		node = temp;
		temp = temp->next;
		count++;

		free(node);

		if (node <= temp)
			break;
	}

	*h = 0;
	return (count);
}
