#include "hash_tables.h"

/**
 * hash_table_get - it retrieves a value associated with a key
 * @ht: it the hash table you want to look into
 * @key: it the key you are looking for
 * Return: the value asscoiated with the element, NULL if key couldn't be found
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int hash;
	hash_node_t *hash_node;

	if (key == NULL || ht == NULL || strlen(key) == 0)
		return (NULL);

	hash = key_index((const unsigned char *)key, ht->size);

	hash_node = ht->array[hash];
	while (hash_node)
	{
		if (strcmp(hash_node->key, key) == 0)
			return (hash_node->value);
		hash_node = hash_node->next;
	}
	return (NULL);
}
