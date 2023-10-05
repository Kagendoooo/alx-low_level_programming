#include "hash_tables.h"

/**
 * hash_table_set - Add or update an element in a hash table
 * @ht: pointer to hash table.
 * @key: key to add
 * @value: value associated with key
 * Return: 0 or 1
*/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *current;
	char *value_copy;
	unsigned long int index, x;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	value_copy = strdup(value);
	if (value_copy == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	for (x = index; ht->array[x]; x++)
	{
		if (strcmp(ht->array[x]->key, key) == 0)
		{
			free(ht->array[x]->value);
			ht->array[x]->value = value_copy;
			return (1);
		}
	}

	current = malloc(sizeof(hash_node_t));
	if (current == NULL)
	{
		free(value_copy);
		return (0);
	}
	current->key = strdup(key);
	if (current->key == NULL)
	{
		free(current);
		return (0);
	}
	current->value = value_copy;
	current->next = ht->array[index];
	ht->array[index] = current;

	return (1);
}
