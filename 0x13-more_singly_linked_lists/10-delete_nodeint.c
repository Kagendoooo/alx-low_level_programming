#include "lists.h"
/**
 * delete_nodeint_at_index - Deletes node at index
 * @index: index of node to be deleted
 * @head: pointer to head of list
 * Return: 1 or -1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *prev_node;
	unsigned int x = 0;

	if (!head || !*head)
		return (-1);

	if (!index)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
		return (1);
	}
	temp = *head;
	while (temp)
	{
		if (x == index)
		{
			prev_node->next = temp->next;
			free(temp);
			return (1);
		}
		x++;
		prev_node = temp;
		temp = temp->next;
	}
	return (-1);
}
