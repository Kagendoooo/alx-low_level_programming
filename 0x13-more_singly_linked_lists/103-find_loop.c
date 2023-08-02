#include "lists.h"
/**
 * find_listint_loop - finds the loop in a list
 * @head: pointer to first node
 * Return: address of looping node or NULL
*/
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *slow, *fast;

	if (!head)
	{
		return (NULL);
	}
	slow = fast = head;
	while (fast->next && fast->next->next)
	{
		fast = fast->next->next;
		slow = slow->next;
		if (fast == slow)
		{
			slow = head;
			while (slow != fast)
			{
				slow = slow->next;
				fast = fast->next;
			}
			return (fast);
		}
	}
	return (NULL);
}
