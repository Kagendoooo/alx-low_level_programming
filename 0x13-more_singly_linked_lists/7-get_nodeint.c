#include "lists.h"
/**
 * get_nodeint_at_index - Returns nth node of list
 * @head: pointer to head of list being freed
 * @index: index of the node
 * starts at 0
 * Return: Null or located node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int node;

	for (node = 0; node < index; node++)
	{
		if (head == NULL)
			return (NULL);

		head = head->next;
	}

	return (head);
}
