#include "lists.h"
/**
 * free_listint - free a list
 * @head: pointer to head of list being freed
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
