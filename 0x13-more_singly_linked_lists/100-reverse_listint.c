#include "lists.h"
/**
 * reverse_listint - reverse a linked list
 * @head: pointer to head of list
 * Return: a pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *previous = NULL, *current_node = *head, *next_node;

	if (head == NULL || *head == NULL)
	{
		return (NULL);
	}

	while ((next_node = current_node->next) != NULL)
	{
		current_node->next = previous;
		previous = current_node;
		current_node = next_node;
	}

	current_node->next = previous;
	*head = current_node;
	return (*head);
}
