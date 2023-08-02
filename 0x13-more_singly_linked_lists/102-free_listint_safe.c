#include "lists.h"
/**
 * free_listint_safe - prints a list
 * @h: address of pointer to first node
 * Return: address of head
 */
size_t free_listint_safe(listint_t **h)
{
	size_t node = 0;
	listint_t *head, *temp;
	long tmp;

	if (!h)
	{
		return (0);
	}
	head = *h;
	*h = NULL;
	while (head)
	{
		node++;
		tmp = head->next - head;
		temp = head;
		free(temp);
		if (tmp >= 0)
		{
			break;
		}
		head = head->next;
	}
	return (node);
}
