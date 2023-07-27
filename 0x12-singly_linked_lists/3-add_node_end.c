#include <string.h>
#include "lists.h"

/**
 *add_node_end -  function that adds a new node at the beginning
 *@head: beginning
 *@str: string
 *Return: NULL or New node
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	char *str_copy;
	list_t *new = *head;

	if (str == NULL)
		return (NULL);

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		return (NULL);
	}

	str_copy = strdup(str);
	if (str_copy == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->str = str_copy;
	new_node->len = strlen(str);
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
		while (new->next != NULL)
		{
			new = new->next;
		}
		new->next = new_node;
	}

	return (new_node);
}
