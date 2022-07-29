#include "hash_tables.h"

/**
 * hash_table_delete - prints a hash table
 * @ht: hash table to print
 *
 * Return: void
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *hash_node;
	unsigned long int i = 0;

	if (ht == NULL || ht->array == NULL)
		return;
	while (i < ht->size)
	{
		hash_node = ht->array[i];
		while (hash_node)
		{
			hash_node = ht->array[i]->next;
			free(ht->array[i]->key);
			free(ht->array[i]->value);
			free(ht->array[i]);
			ht->array[i] = hash_node;

		}
		i++;
	}
	free(ht->array);
	ht->array = NULL;
	ht->size = 0;
	free(ht);
}

