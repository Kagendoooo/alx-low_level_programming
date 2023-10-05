#include "hash_tables.h"

/**
 * hash_table_get - Retrieve value associated with key
 * @ht: pointer to hash table
 * @key: The key to get the value of
 * Return: NULL or value associated
*/
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *node;
	unsigned long int x;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	x = key_index((const unsigned char *)key, ht->size);
	if (x >= ht->size)
		return (NULL);

	node = ht->array[x];
	while (node && strcmp(node->key, key) != 0)
		node = node->next;

	return ((node == NULL) ? NULL : node->value);
}
