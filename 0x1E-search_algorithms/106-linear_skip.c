#include "search_algos.h"

/**
 * linear_skip - Searches for a value in a sorted skip list of ints
 * using linear skip.
 * @list: pointer to head of linked list
 * @value: value to search for
 * Return: Pointer to the first node or NULL
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *prev, *cur;

	if (list == NULL)
		return (NULL);

	for (prev = cur = list; cur->next != NULL && cur->n < value;)
	{
		prev = cur;
		if (cur->express != NULL)
		{
			cur = cur->express;
			printf("Value checked at index [%ld] = [%d]\n",
					cur->index, cur->n);
		}
		else
		{
			while (cur->next != NULL)
				cur = cur->next;
		}
	}

	printf("Value found between indexes [%ld] and [%ld]\n",
			prev->index, cur->index);

	for (; prev->index < cur->index && prev->n < value; prev = prev->next)
		printf("Value checked at index [%ld] = [%d]\n", prev->index, prev->n);
	printf("Value checked at index [%ld] = [%d]\n", prev->index, prev->n);

	return (prev->n == value ? prev : NULL);
}
