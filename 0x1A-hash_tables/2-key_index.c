#include "hash_tables.h"

/**
 * key_index - Get index at which a key should be stored
 * @key: key to get index of
 * @size: size of array
 * Return: index of key
 * Description: Uses the djb2 algorithm
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
