#include "hash_tables.h"

/**
 * hash_table_delete - prints a hash table
 * @ht: hash table to print
 *
 * Return: void
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *hash_node, *prev_node;
	unsigned long int i = 0;

	if (ht == NULL || ht->array == NULL)
		return;
	while (i < ht->size)
	{
		hash_node = ht->array[i];
		while (hash_node)
		{
			prev_node = hash_node->next;
			free(hash_node->key);
			free(hash_node->value);
			free(hash_node);
			hash_node = prev_node->next;

		}
		i++;
	}
	free(ht->array);
	ht->array = NULL;
	ht->size = 0;
	free(ht);
}

